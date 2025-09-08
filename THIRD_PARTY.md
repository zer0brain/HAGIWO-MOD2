Third-party components
======================

SAM – Software Automatic Mouth (arduino-SAM)
--------------------------------------------
- Upstream: https://github.com/pschatzmann/arduino-SAM
- Author: Phil Schatzmann
- Summary: Tiny Text-To-Speech (TTS) engine with reciter and phoneme synthesizer.
- License/Status: Upstream marks it as reverse-engineered from commercial software and describes it as "Abandonware" without a clear open-source license. Use at your own risk. See upstream README for details.

Integration
-----------
- This project does not redistribute SAM code. It is consumed as an external dependency via PlatformIO `lib_deps`.
- To pin to a specific revision, add `#<commit-sha>` to the dependency URL in `platformio.ini`.
