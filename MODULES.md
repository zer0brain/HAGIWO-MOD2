Modules Index
=============

This is a complete index of modules in this project with quick links to their sources and PlatformIO environments, plus guidance to add new ones.

HAGIWO series
-------------
- Clap — env `hagiwo_clap` — `src/HAGIWO/clap/`
- Claves — env `hagiwo_claves` — `src/HAGIWO/claves/`
- Hi‑hat — env `hagiwo_hihat` — `src/HAGIWO/hihat/`
- Kick — env `hagiwo_kick` — `src/HAGIWO/kick/`
- FM Drum — env `hagiwo_fm_drum` — `src/HAGIWO/fm_drum/`
- VCO — env `hagiwo_vco` — `src/HAGIWO/vco/`
- Break beats — env `hagiwo_break_beats` — `src/HAGIWO/break_beats/`
- Sample player — env `hagiwo_sample_player` — `src/HAGIWO/sample_player/`
 - Kick — env `hagiwo_kick` — `src/HAGIWO/kick/`
 - FM Drum — env `hagiwo_fm_drum` — `src/HAGIWO/fm_drum/`

zer0 series
-----------
- Bassdrum — env `zer0_bassdrum` — `src/zer0/bassdrum/`
- Bassline — env `zer0_bassline` — `src/zer0/bassline/`
- Cowbell — env `zer0_cowbell` — `src/zer0/cowbell/`
- Death Whistle — env `zer0_death_whistle` — `src/zer0/death_whistle/`
- Hi‑hat — env `zer0_hihat` — `src/zer0/hihat/`
- Horn — env `zer0_horn` — `src/zer0/horn/`
- Kick — env `zer0_kick` — `src/zer0/kick/`
- Micro Sampler — env `zer0_micro_sampler` — `src/zer0/micro_sampler/`
- Psy Drone — env `zer0_psy_drone` — `src/zer0/psy_drone/`
- Rimshot — env `zer0_rimshot` — `src/zer0/rimshot/`
- SAM Speech — env `zer0_sam` — `src/zer0/sam/`
- Scream Synth — env `zer0_scream_synth` — `src/zer0/scream_synth/`
- Snare — env `zer0_snare` — `src/zer0/snare/`
- Tape Sampler — env `zer0_tape_sampler` — `src/zer0/tape_sampler/`
- Vibra — env `zer0_vibra` — `src/zer0/vibra/`
- Wind Noise — env `zer0_windnoise` — `src/zer0/windnoise/`
- Voicees — env `zer0_voicees` — `src/zer0/voicees/`

Planned (from HAGIWO MOD2 page)
-------------------------------
- Additional HAGIWO MOD2 modules are listed on the creator page:
  - https://note.com/solder_state
- Add new entries here as you bring them into `src/HAGIWO/<name>/` and create the env in `platformio.ini`.

How to add a new module
-----------------------
1) Create source folder, e.g. `src/HAGIWO/<module_name>/` with a `main.cpp`.
2) Add a PlatformIO environment in `platformio.ini`:

   [env:hagiwo_<module_name>]
   extends = env:base_rp2350
   build_src_filter = -<*> +<HAGIWO/<module_name>/>

3) Document pin mapping at the top of `main.cpp`.
4) Build and test that specific environment.
5) Append your module to the index above.
