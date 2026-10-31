"""Replace the split Training frame loop's tail-call cycle with a local dispatcher."""
from pathlib import Path
import argparse
import re

MARKER = "GEN-EDIT: constant-stack training 44320/443A0/445DF"
ENTRIES = ('00044320', '000443A0', '000445DF')
EXPECTED = {('00044320','000445DF'):4, ('00044320','000443A0'):1,
            ('000443A0','000445DF'):2, ('000445DF','00044320'):1}


def transform(text, entries=ENTRIES, expected=EXPECTED, marker=MARKER, prefix='training'):
    if marker in text:
        return text
    regions=[]
    seen={}
    for entry in entries:
        match=re.search(r'^void sub_'+entry+r'\(void\)\n\{',text,re.M)
        if not match:
            raise ValueError('missing Training entry '+entry)
        end=text.index('\n}\n',match.end())+3
        body=text[match.start():end]
        for target in entries:
            edge='g_seh_ebp = ebp; sub_'+target+'(); return;'
            count=body.count(edge)
            if count:
                seen[entry,target]=count
                body=body.replace(edge,'g_seh_ebp = ebp; *next = 0x'+target+'u; return;')
            if re.search(r'\bsub_'+target+r'\(\)',body):
                raise ValueError('unexpected non-tail cycle call')
        body=body.replace('void sub_'+entry+'(void)',
                          'static void '+prefix+'_body_'+entry+'(uint32_t *next)',1)
        regions.append((match.start(),end,body))
    if seen!=expected:
        raise ValueError('Training edges changed: '+repr(seen))
    declarations='/* '+marker+'. Native recursion is not a guest jump. */\n'
    for entry in entries:
        declarations+='static void '+prefix+'_body_'+entry+'(uint32_t *next);\n'
    declarations+='static void '+prefix+'''_cycle(uint32_t entry)
{
    while (entry) {
        uint32_t next = 0;
        switch (entry) {
'''
    for entry in entries:
        declarations+='        case 0x'+entry+'u: '+prefix+'_body_'+entry+'(&next); break;\n'
    declarations+='''        }
        entry = next;
    }
}
'''
    for entry in entries:
        declarations+='void sub_'+entry+'(void) { '+prefix+'_cycle(0x'+entry+'u); }\n'
    for start,end,body in reversed(regions):
        text=text[:start]+body+text[end:]
    start=regions[0][0]
    return text[:start]+declarations+text[start:]


def apply(files,dry_run=False):
    for filename in files:
        path=Path(filename)
        text=path.read_text(encoding='utf-8',errors='surrogateescape')
        if MARKER in text:
            print('  skip     constant-stack Training already present')
            return
        if 'void sub_00044320(void)\n{' not in text:
            continue
        updated=transform(text)
        if not dry_run:
            path.write_text(updated,encoding='utf-8',errors='surrogateescape')
        print('  APPLIED  constant-stack Training -> '+path.name)
        return
    raise ValueError('Training cycle not found')


if __name__=='__main__':
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument('--gen-dir',type=Path,default=Path(__file__).resolve().parents[1]/'src/recomp/gen')
    p.add_argument('--dry-run',action='store_true')
    args=p.parse_args()
    apply(sorted(args.gen_dir.glob('recomp_*.c')),args.dry_run)
