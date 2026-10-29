# Dead or Alive ULTIMATE
Recompilation for Dead or Alive 1 - ULTIMATE from the OG XBOX

# Features
* Windows only. :( 
  - I don't have a Linux box for testing
* No online mode. :(
  - I have no idea how to code netcode.
* DirectX 11, 12 and Vulcan rendering supported.
* Anti-Aliasing x2, x4, x8, x16 support.
  - SSAA
  - MSAA
  - FXAA
  - SMAA 
* Texture Filtering
  - Nearest-neighbor
  - Bilinear
  - Trilinear
  - Anisotropic 
* PS4, PS5, XBOX and Nintendo Pro Controller support (soon.)

# Made With
* xboxrecomp (MIT) https://github.com/sp00nznet/xboxrecomp

# Dependencies
* NVIDIA Rendering Interface (MIT) https://github.com/NVIDIA-RTX/NVRHI
* ImGUI (MIT) https://github.com/ocornut/imgui
* pl_mpeg (MIT) https://github.com/phoboslab/pl_mpeg
* RenderDoc (MIT) https://github.com/baldurk/renderdoc

# Building
Make sure to clone all the repos above somewhere.\
Change `CMakeLists.txt` to reflect the source of the dependencies.\
Run: `cmake --build build --config Release --target doa1u_recomp`
** Builds with MSVC compiler. **

# Status
Fully playable. Audio, FX and Voices are all available and working.\
Arcade, Training, Time Attack, Survival, Kumite - all fully working.\
"Secret Menu" also works.\
No online mode, sorry.
 
# Disclaimer
AI Assisted. Codex and Claude Code.
