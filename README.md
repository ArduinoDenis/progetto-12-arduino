# MOSFET Motor Speed Control

This Arduino sketch demonstrates how to control the speed of a DC motor using a MOSFET module.

## Description

The script gradually increases and decreases the motor speed using pulse-width modulation (PWM) through a MOSFET module connected to pin 9 of the Arduino board. The motor speed starts from 0 and ramps up to maximum speed (255) and then back down to 0. Once the speed reaches 0, it pauses for 5 seconds before starting the cycle again.

## Circuit Diagram

Connect the MOSFET module to the Arduino board as follows:

- MOSFET Gate: Pin 9
- MOSFET Source: Ground (GND)
- MOSFET Drain: Motor positive terminal
- Motor negative terminal: Ground (GND)

## How to Use

1. Upload the sketch to your Arduino board.
2. Connect the MOSFET module and DC motor to the Arduino following the circuit diagram.
3. Power on the Arduino board.
4. Observe the DC motor's speed gradually increasing and decreasing.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
