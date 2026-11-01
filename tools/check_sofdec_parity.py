"""Compare baseline/host/image acquisition and complete decoded-output digests.

Usage: python tools/check_sofdec_parity.py reference.json folder.json image.json ...
Manifests come from the headless sofdec_check executable. No game assets included.
"""
import json
from pathlib import Path
import sys

assert len(sys.argv) >= 4, __doc__
paths = [Path(p) for p in sys.argv[1:]]
reference = json.loads(paths[0].read_text())
assert len(reference["acquisition"]) == 6 and len(reference["decoded"]) == 2
for path in paths[1:]:
    actual = json.loads(path.read_text())
    assert actual == reference, f"Movie acquisition/decoded output differs: {path} vs {paths[0]}"
    print(f"PASS: {path}: six acquisition results and both complete BGR/PCM outputs match baseline")
for movie in reference["decoded"]:
    print(f'{movie["path"]}: {movie["frames"]} frames; {movie["samples"]} PCM samples/channel; '
          f'{movie["width"]}x{movie["height"]}, {movie["rate"]} Hz/{movie["channels"]}ch')
