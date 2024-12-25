# LED Level Indicator Project

A simple LED level indicator application built using Arduino Uno, featuring 10 LEDs controlled by 4 buttons.

## 🛠️ Components Used

- 1x Arduino Uno
- 10x LEDs
- 10x 220Ω Resistors
- 4x Push Buttons
- Jumper Wires
- 1x Breadboard

## 📋 Features

- 10-level LED display
- 4 control buttons
- Level up/down functionality
- Quick maximum and reset functions

## 🎮 Button Controls

| Button | Pin | Function |
|--------|-----|----------|
| setUp | 2 | Increases level by one |
| setDown | 1 | Decreases level by one |
| set | 3 | Sets level to maximum (10) |
| reset | 0 | Resets level to zero |

## 📝 Pin Connections

### LED Pins
- LED 1: Pin 4
- LED 2: Pin 5
- LED 3: Pin 6
- LED 4: Pin 7
- LED 5: Pin 8
- LED 6: Pin 9
- LED 7: Pin 10
- LED 8: Pin 11
- LED 9: Pin 12
- LED 10: Pin 13

## 🔧 Installation

1. Make connections according to the circuit diagram
2. Open Arduino IDE
3. Upload the code to Arduino
4. Control LED level using the buttons

## 💡 Usage

- Press `setUp` button to increase the level
- Press `setDown` button to decrease the level
- Press `set` button to turn on all LEDs
- Press `reset` button to turn off all LEDs

## 📸 Project Image

![image](https://github.com/user-attachments/assets/cfd8c470-eaaa-4331-afb8-05decbaf964d)


## ⚠️ Important Notes

- Ensure LEDs are connected in the correct orientation
- Make sure resistors are connected in series with LEDs
- Verify button connections to correct pins

## 🔄 Version History

- v1.0 (Initial Release) - [2024]
  - Basic LED control system
  - 4 button controls
  - Level indicator functionality

## 📄 License

This project is licensed under the MIT License.

