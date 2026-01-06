**name : Shamaim Khan** 

**Roll NO : 23 -NTU-CS-1284**

**TASK A**



**link :** https://wokwi.com/projects/445894968172920833



**Pin Map :**

| \*\*Component\*\*                     | \*\*ESP32 Pin\*\* | \*\*Type / Direction\*\*        | \*\*Connection Details\*\*                                   |

| --------------------------------- | ------------- | --------------------------- | -------------------------------------------------------- |

|  \*\*LED1\*\*                         | \*\*18\*\*        | Output                      | Connect to LED anode (via 220 Ω resistor); cathode → GND |

|  \*\*LED2\*\*                         | \*\*19\*\*        | Output                      | Connect to LED anode (via 220 Ω resistor); cathode → GND |

|  \*\*LED3\*\*                         | \*\*4\*\*         | Output                      | Connect to LED anode (via 220 Ω resistor); cathode → GND |

|  \*\*Buzzer\*\*                       | \*\*27\*\*        | Output (tone)               | Positive pin → GPIO 27; Negative → GND                   |

|  \*\*Mode Button (BTN\_MODE)\*\*       | \*\*32\*\*        | Input (with `INPUT\_PULLUP`) | One leg → GPIO 32; other leg → GND                       |

|  \*\*Reset Button (BTN\_RESET)\*\*     | \*\*33\*\*        | Input (with `INPUT\_PULLUP`) | One leg → GPIO 33; other leg → GND                       |

|  \*\*OLED Display (SSD1306, I2C)\*\*  | —             | —                           | —                                                        |

|    • SDA                          | \*\*21\*\*        | I2C Data                    | Connect to OLED SDA                                      |

|    • SCL                          | \*\*22\*\*        | I2C Clock                   | Connect to OLED SCL                                      |

|    • VCC                          | \*\*3.3 V\*\*     | Power                       | Connect to ESP32 3.3 V                                   |

|    • GND                          | \*\*GND\*\*       | Ground                      | Common ground with ESP32                                 |



