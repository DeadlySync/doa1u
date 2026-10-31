"""Reapply constant-stack execution for the captured 166B0 task frame cycle."""
from pathlib import Path
import argparse
from fix_training_loop_cycle import transform

MARKER='GEN-EDIT: constant-stack task 166B0/167F0/16AC4'
ENTRIES=('000166B0','000167F0','00016AC4')
EXPECTED={('000166B0','000167F0'):1,('000167F0','00016AC4'):1,('00016AC4','000166B0'):1}

def apply(files,dry_run=False):
    for filename in files:
        p=Path(filename);s=p.read_text(encoding='utf-8',errors='surrogateescape')
        if MARKER in s:
            print('  skip     constant-stack task frame already present');return
        if 'void sub_000166B0(void)\n{' not in s:continue
        updated=transform(s,ENTRIES,EXPECTED,MARKER,'task_frame')
        if not dry_run:p.write_text(updated,encoding='utf-8',errors='surrogateescape')
        print('  APPLIED  constant-stack task frame -> '+p.name);return
    raise ValueError('task frame cycle not found')

if __name__=='__main__':
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument('--gen-dir',type=Path,default=Path(__file__).resolve().parents[1]/'src/recomp/gen')
    p.add_argument('--dry-run',action='store_true')
    args=p.parse_args();apply(sorted(args.gen_dir.glob('recomp_*.c')),args.dry_run)
