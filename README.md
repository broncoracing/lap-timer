# lap-timer
GPS Lap Timer

## Project: 

A PCB with a built in GPS module and CAN bus hardware to log and transmit lap times over CAN bus. 

## Hardware: 

### Electronics: 

- 4 Layer PCB made in Altium 
- Main microcontroller: STM32F103C8T6
- CAN transceiver: SN65HVD230DR
- GPS Module: UBLOX M8Q
  This can be changed, but ideally one like this with an internal antenna will be used. 
  Connected to STM32 via UART/serial
- Voltage regulation on board (can be simple linear regulators)
- JST PH connector for CAN bus and 14V power
  Since this will be repeatedly connected/disconnected, I’m open to other options
- 2 pin connector for button
- 2 two pin connectors for two status LEDs (power and GPS status)	


### Enclosure:

- 3D printable enclosure 
- Quick mounting to the main roll hoop (above driver’s head). Ideally this will be a toolless mounting system. 
- 1 single plug to connect
- Waterproof button accessible from outside

## Software: 

- STM32 is in charge of the CAN bus control and the GPS module
- Continuously queries GPS module for correct location (highest rate possible)
- Calculates time from when car starts moving from set start coordinates, until car passes within a specified 
  range of the start coordinates. Factor in speed to  improve accuracy 
- Fancy features for the future:
  - Log the whole run, and map out the track on a laptop with a heatmap of speed. 

## Usage at a a test track: 

1. Install GPS lap timer to roll hoop
2. Plug it in
3. Wait for GPS ready LED to be solid (in your code)
4. Roll car to starting line
5. Press the “teach” button to tell the module where the starting line is. 
6. Use existing telemetry software to view lap times

The main STM32 and CAN bus schematic can be stolen from the brake light hardware. Remove all of the LEDs obviously and add in the UBLOX module. 
