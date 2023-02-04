# Flo Edge
> [reff](https://www.youtube.com/watch?v=y_1fQNMngR8)

1. Pocophone F1 SOM as main compute sensor and comms board
2. 3D printed case
    1. Material: Nylone
    2. With threaded inserts
    3. With provision for mounting
3. Peltier module with aluminium heatsink extrusion and temperature sensor
    1. Attached to processor with thermal pad.
4. Carrier Board
    1. 12 pin IP55 rated GX20 connector which contains USB data line, power input(VCC, GND), and communication to microcontroller (GPIO + UART)
    2. Peltier module
    3. Temperature sensor attached to peltier module
    4. B+ and B- from bms pcb
    5. USB C from poco f1 charging pcb
    6. haptic motor pins from poco f1 charging pcb
    7. Power, V+ & V- from poco f1 side button pcb
    8. STM32F401CCU6 to control internal working
5. External helper pcb
  1. USB C female for connecting external usb device.
  2. Barrel jack for 12V power input.
  3. Switch to select mode (Normal, Fastboot, Recovery)
  4. Multi color LED to show status
  5. Push button for start and shutdown.
  
![carrier_board](./carrier_board.svg)
