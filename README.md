# Marlin for Two Tress Bluer

Marlin stable release: ![version](https://img.shields.io/badge/version-2.0.7.2-blue)

## What is new?
- This firmware was configured to allow higher bed temperature (+100º)
- Hotend and Bed PID were configured by using Autotune with 10 cycles
- Added custom menus "My Commands":
  - Preheat for PLA
  - Preheat for ABS
  - Cooldown (Hotend and Bed)
  - Eject SD
  - Attach SD
  - Home All

##  Default configuration
```
- DEFAULT_AXIS_STEPS_PER_UNIT = [X, Y, Z, E0] { 160, 160, 400, 415 }
- X_BED_SIZE=235, Y_BED_SIZE=235, Z_MAX_POS=280
- X_MIN_POS=-1.5, Y_MIN_POS=-2
- MESH_BED_LEVELING=true
- Hotend PID [DEFAULT_Kp 12.60, DEFAULT_Ki 0.65, DEFAULT_Kd 61.10]
- Bed PID [DEFAULT_bedKp 19.32, DEFAULT_bedKi 3.77, DEFAULT_bedKd 66.09]
```
