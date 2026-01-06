**name : Shamaim Khan** 

**Roll NO : 23 -NTU-CS-1284**

**TASK B**



**link :**https://wokwi.com/projects/445953325875984385

PIN MAP:
| **Component**                    | **ESP32 Pin** | **Direction**               | **Connection Details**                                                            |
| -------------------------------- | ------------- | --------------------------- | --------------------------------------------------------------------------------- |
|  **LED**                         | **27**        | Output                      | LED anode (long leg) → 220 Ω resistor → pin 27; LED cathode (short leg) → **GND** |
|  **Button**                      | **14**        | Input (with `INPUT_PULLUP`) | One leg → pin 14; other leg → **GND**                                             |
|  **OLED Display (SSD1306 I2C)**  |               |                             |                                                                                   |
|    • SDA                         | **21**        | Output (I2C Data)           | Connect to OLED SDA pin                                                           |
|    • SCL                         | **22**        | Output (I2C Clock)          | Connect to OLED SCL pin                                                           |
|    • VCC                         | **3.3 V**     | Power                       | Connect to ESP32 3.3 V pin                                                        |
|    • GND                         | **GND**       | Ground                      | Connect to ESP32 GND                                                              |
|  **Power (ESP32)**               | —             | —                           | Use USB to power board (5 V to 3.3 V regulated internally)                        |
