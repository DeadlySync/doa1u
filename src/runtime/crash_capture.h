#ifndef DOA1U_CRASH_CAPTURE_H
#define DOA1U_CRASH_CAPTURE_H

/* Passive until NULL execute or an unhandled exception. No debugger needed. */
void crash_capture_init(void);
/* Returns nonzero only for repeat reports of the same NULL-execute failure. */
int crash_capture_null_execute(void *exception_pointers);
/* Explicit first-chance capture of a caller-identified unrecoverable fault. */
int crash_capture_known_fault(void *exception_pointers);
/* First-chance native UCRT read failure; excludes guest code/MMIO and writes. */
int crash_capture_crt_read(void *exception_pointers);

#endif
