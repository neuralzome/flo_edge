# Flo Edge

1. Pocophone F1 SOM as main compute, sensor and comms board
2. 3D printed case
    1. Material: Nylone
    2. With threaded inserts
3. Peltier module with aluminium heatsink extrusion and temperature sensor
    1. Attached to processor with thermal pad.
    2. With provision for mounting via helicoil insert.
4. Flo edge pcb
    1. 12 pin IP55 rated GX20 connector which contains USB data line, power input(VCC, GND), and communication to microcontroller (GPIO + UART)
    2. Peltier module
    3. Temperature sensor attached to peltier module
    4. Fan (pwm controlled)
    5. B+ and B- from bms pcb
    6. USB C from poco f1 charging pcb
    7. haptic motor pins from poco f1 charging pcb
    8. Power, V+ & V- from poco f1 side button pcb
    9. Microcontroller to control internal working
5. Flo edge attachment pcb
    1. USB C female for connecting external usb device.
    2. Barrel jack for 12V power input.
    3. Switch to select mode (Normal, Fastboot)
    4. Switch for selecting USB mode (otg, regular)
    5. Multi color LED to show status
    6. Push button for start and shutdown.
  
![carrier_board](./carrier_board.svg)

## Reference
1. [aidlux](https://www.youtube.com/watch?v=y_1fQNMngR8)
2. [comma ai](https://comma.ai/)
