<h1 align="center">🧪 | MotorGo Experimental Board Definitions | 🧪</h1>

<p align="center">
  Contains the board definitions for MotorGo Alpha/Beta boards.
</p>

---

## Introduction

MotorGo a two-stage release structure for MotorGo boards:

- Experimental Boards: Boards that are in alpha or beta testing stages. These boards range from first designs to boards that are almost ready for production. The board definitions for these boards are stored in this repository. Follow the instructions below to add these board definitions to your Arduino IDE.

- Production Boards: Boards that are ready for production. The board definitions for these boards are available in the `esp32 by espressif systems` board definition package in the Arduino IDE and PlatformIO. For more information on how to use these board definitions, refer to the [MotorGo Documentation](https://docs.motorgo.net/standalone_mode/board_setup).


## Board Status

The table below describes the development status of the MotorGo Experimental Boards
<!-- Table -->
| Board Name | Status | Where to Install |
|------------|--------|------------------|
| MotorGo Mini | Production | esp32 board definitions |
| MotorGo Plink | Beta | Experimental Boards |
| MotorGo Axis | Beta | Experimental Boards |

## Installation

To install the board definitions for MotorGo Experimental Boards, follow the instructions below:

1. Open the Arduino IDE.
2. Go to `File > Preferences` (Windows/Linux) or `Arduino > Preferences` (macOS).
3. In the `Additional Boards Manager URLs` field, add the following URL:
   ```
   https://raw.githubusercontent.com/Every-Flavor-Robotics/motorgo-experimental-boards/refs/heads/main/package_motorgo_index.json
   ```
4. Click `OK`.
5. Go to `Tools > Board > Boards Manager...`.
6. Search for `MotorGo Experimental`.
7. Click `Install`.
8. Once the installation is complete, you can select the MotorGo Experimental Boards from the `Tools > Board` menu.

## Contributing

Development Notes:
* The current esp32 core version is `3.1.1`.
* The platform.txt file has to be copied from an arduino installation, because it differs from the one in the arduino-esp32 repository.
*
