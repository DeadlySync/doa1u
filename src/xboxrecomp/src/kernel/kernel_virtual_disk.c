/* Sparse, process-local raw Xbox devices. Save files remain ordinary files.
 * Only raw-device sectors are volatile (partition metadata/cache formatting).
 * Devices keep their contents across close/reopen; handles share a cursor when
 * duplicated. No .img files, huge allocations, or host disk-device access.
 */
#include "kernel_virtual_disk.h"
#include <stdlib.h>
#include <string.h>
static int enabled;
void xbox_virtual_disk_enable(void) { enabled = 1; }
int xbox_virtual_disk_enabled(void) { return enabled; }

#if defined(_WIN32)
typedef struct Page { struct Page *next; uint64_t index; unsigned char bytes[4096]; } Page;
typedef struct Open { int part; unsigned refs; uint64_t position; ACCESS_MASK access; } Open;
typedef struct Entry { struct Entry *next; HANDLE handle; Open *file; } Entry;
static Page *pages[6];
static Entry *entries;
static SRWLOCK lock = SRWLOCK_INIT;

static Entry *find(HANDLE h) {
    for (Entry *e=entries;e;e=e->next) if (e->handle==h) return e;
    return NULL;
}
static NTSTATUS finish(PXBOX_IO_STATUS_BLOCK ios, NTSTATUS st, ULONG bytes) {
    if (ios) { ios->Status=st; ios->Information=bytes; }
    return st;
}
static void initial(int part, uint64_t start, unsigned char *data, size_t length) {
    memset(data,0,length);
    if (part==0 && start<0xA00 && start+length>0x800) {
        unsigned char table[512]; xbox_path_partition_table(table);
        uint64_t lo=start>0x800?start:0x800, hi=start+length<0xA00?start+length:0xA00;
        memcpy(data+(size_t)(lo-start),table+(size_t)(lo-0x800),(size_t)(hi-lo));
    }
}
NTSTATUS xbox_virtual_disk_open(int part, ACCESS_MASK access, HANDLE *out) {
    if (part<0 || part>5 || !out) return STATUS_INVALID_PARAMETER;
    Entry *e=calloc(1,sizeof *e); Open *f=calloc(1,sizeof *f);
    if (!e || !f) { free(e);free(f);return (NTSTATUS)0xC0000017; }
    e->handle=CreateEventW(NULL,TRUE,TRUE,NULL);
    if (!e->handle) { free(e);free(f);return STATUS_UNSUCCESSFUL; }
    f->part=part;f->refs=1;f->access=access;e->file=f;
    AcquireSRWLockExclusive(&lock);e->next=entries;entries=e;ReleaseSRWLockExclusive(&lock);
    *out=e->handle;return STATUS_SUCCESS;
}
int xbox_virtual_disk_size(HANDLE h,uint64_t *size) {
    AcquireSRWLockShared(&lock);Entry *e=find(h);
    if(e && size)*size=xbox_path_partition_size(e->file->part);
    int found=e!=NULL;ReleaseSRWLockShared(&lock);return found;
}
int xbox_virtual_disk_io(HANDLE h,int write,HANDLE event,PXBOX_IO_STATUS_BLOCK ios,
                        void *buffer,ULONG length,PLARGE_INTEGER offset,NTSTATUS *status) {
    AcquireSRWLockExclusive(&lock);Entry *e=find(h);
    if(!e){ReleaseSRWLockExclusive(&lock);return 0;}
    Open *f=e->file;uint64_t size=xbox_path_partition_size(f->part);
    NTSTATUS st=STATUS_SUCCESS;ULONG done=0;
    uint64_t pos=offset && offset->QuadPart>=0?(uint64_t)offset->QuadPart:f->position;
    ACCESS_MASK required=write?(XBOX_GENERIC_WRITE|XBOX_GENERIC_ALL|XBOX_FILE_WRITE_DATA|XBOX_FILE_APPEND_DATA)
                              :(XBOX_GENERIC_READ|XBOX_GENERIC_ALL|XBOX_FILE_READ_DATA);
    if(!ios || (!buffer && length))st=STATUS_INVALID_PARAMETER;
    else if(!(f->access & required))st=(NTSTATUS)0xC0000022;
    else if(offset && offset->QuadPart<0 && offset->QuadPart!=-2)st=STATUS_INVALID_PARAMETER;
    else if(pos>size)st=write?(NTSTATUS)0xC000007F:STATUS_END_OF_FILE;
    else if(write && length>size-pos)st=(NTSTATUS)0xC000007F;
    else if(!write && length && pos==size)st=STATUS_END_OF_FILE;
    else {
        ULONG count=(ULONG)((uint64_t)length>size-pos?size-pos:length);
        while(done<count){
            uint64_t at=pos+done,index=at/4096;size_t within=(size_t)(at%4096);
            ULONG n=count-done;if(n>4096-within)n=(ULONG)(4096-within);
            Page *p=pages[f->part];while(p && p->index!=index)p=p->next;
            if(write && !p){
                p=calloc(1,sizeof *p);if(!p){st=(NTSTATUS)0xC0000017;break;}
                p->index=index;initial(f->part,index*4096,p->bytes,4096);
                p->next=pages[f->part];pages[f->part]=p;
            }
            if(write)memcpy(p->bytes+within,(unsigned char*)buffer+done,n);
            else if(p)memcpy((unsigned char*)buffer+done,p->bytes+within,n);
            else initial(f->part,at,(unsigned char*)buffer+done,n);
            done+=n;
        }
        f->position=pos+done;
    }
    *status=finish(ios,st,done);ReleaseSRWLockExclusive(&lock);
    if(NT_SUCCESS(st) && event)SetEvent(event);
    return 1;
}
int xbox_virtual_disk_query(HANDLE h,PXBOX_IO_STATUS_BLOCK ios,void *buffer,
                           ULONG length,XBOX_FILE_INFORMATION_CLASS cls,int set,NTSTATUS *status) {
    AcquireSRWLockExclusive(&lock);Entry *e=find(h);
    if(!e){ReleaseSRWLockExclusive(&lock);return 0;}
    NTSTATUS st=STATUS_SUCCESS;ULONG bytes=0;uint64_t size=xbox_path_partition_size(e->file->part);
    if(!ios || !buffer)st=STATUS_INVALID_PARAMETER;
    else if(cls==XboxFilePositionInformation){
        if(length<sizeof(XBOX_FILE_POSITION_INFORMATION))st=(NTSTATUS)0xC0000023;
        else if(set){
            LONGLONG pos=((PXBOX_FILE_POSITION_INFORMATION)buffer)->CurrentByteOffset.QuadPart;
            if(pos<0 || (uint64_t)pos>size)st=STATUS_INVALID_PARAMETER;else e->file->position=(uint64_t)pos;
        }else{((PXBOX_FILE_POSITION_INFORMATION)buffer)->CurrentByteOffset.QuadPart=e->file->position;bytes=sizeof(XBOX_FILE_POSITION_INFORMATION);}
    }else if(!set && cls==XboxFileStandardInformation){
        if(length<sizeof(XBOX_FILE_STANDARD_INFORMATION))st=(NTSTATUS)0xC0000023;
        else{PXBOX_FILE_STANDARD_INFORMATION b=buffer;memset(b,0,sizeof *b);
            b->AllocationSize.QuadPart=b->EndOfFile.QuadPart=size;b->NumberOfLinks=1;bytes=sizeof *b;}
    }else if(!set && cls==XboxFileBasicInformation){
        if(length<sizeof(XBOX_FILE_BASIC_INFORMATION))st=(NTSTATUS)0xC0000023;
        else{PXBOX_FILE_BASIC_INFORMATION b=buffer;memset(b,0,sizeof *b);b->FileAttributes=FILE_ATTRIBUTE_NORMAL;bytes=sizeof *b;}
    }else st=STATUS_NOT_IMPLEMENTED;
    *status=finish(ios,st,bytes);ReleaseSRWLockExclusive(&lock);return 1;
}
static void remove_entry(Entry *e) {
    Entry **p=&entries;while(*p!=e)p=&(*p)->next;*p=e->next;
    CloseHandle(e->handle);if(!--e->file->refs)free(e->file);free(e);
}
int xbox_virtual_disk_close(HANDLE h) {
    AcquireSRWLockExclusive(&lock);Entry *e=find(h);int found=e!=NULL;
    if(e)remove_entry(e);ReleaseSRWLockExclusive(&lock);return found;
}
int xbox_virtual_disk_duplicate(HANDLE source,HANDLE *out,DWORD options) {
    AcquireSRWLockExclusive(&lock);Entry *e=find(source);
    if(!e){ReleaseSRWLockExclusive(&lock);return 0;}
    Entry *copy=calloc(1,sizeof *copy);
    if(copy)copy->handle=CreateEventW(NULL,TRUE,TRUE,NULL);
    if(!copy || !copy->handle){free(copy);*out=NULL;}
    else{copy->file=e->file;copy->file->refs++;copy->next=entries;entries=copy;*out=copy->handle;
        if(options&DUPLICATE_CLOSE_SOURCE)remove_entry(e);}
    ReleaseSRWLockExclusive(&lock);return 1;
}
#endif
