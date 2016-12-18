# AVR-Hello-World
Files in `HelloWorld` are files created mostly when following the [Getting Started With AVR](https://www.youtube.com/playlist?list=PLtQdQmNK_0DRhBWYZ32BEILOykXLpJ8tP) videos from Atmel

## Parts
- [ATtiny2313](https://www.digikey.com/product-detail/en/atmel/ATTINY2313-20PU/ATTINY2313-20PU-ND/1008418)
	- [Official Documentation](http://www.atmel.com/devices/ATtiny2313.aspx?tab=documents)
	- [Summary](http://www.atmel.com/Images/Atmel-2543-AVR-ATtiny2313_Summary.pdf)
	- [Complete Datasheet](http://www.atmel.com/Images/Atmel-2543-AVR-ATtiny2313_Datasheet.pdf)
- [Transmitter: WRL-10534](https://www.digikey.com/product-detail/en/sparkfun-electronics/WRL-10534/1568-1175-ND/5673761)
- [Receiver: WRL-10532](https://www.digikey.com/product-detail/en/sparkfun-electronics/WRL-10532/1568-1173-ND/5673759)
- [Speakers: GF0668](https://www.digikey.com/product-detail/en/cui-inc/GF0668/GF0668-ND/304440)
- [N-Channel MOSFET: FQP30N06L](https://www.sparkfun.com/products/10213)
- [LED: COM-12062](https://www.sparkfun.com/products/12062)

| Color  | Brightness          | Wavelength  | VDrop           | IMax | Resistor? |
|--------|---------------------|-------------|-----------------|------|-----------|
| Red    | 150-200mcd (200mcd) | 620-625nm   | 2.0-2.4V(2.2V)  | 20mA | 330 Ohm   |
| Yellow | 150-200mcd          | 587-591nm   | 2.0-2.4V        | 20mA | 330 Ohm   |
| Blue   | 300-400mcd          | 465-467.5nm | 3.0-3.4V        | 30mA | 187 Ohm   |
| Green  | 150-200mcd (200mcd) | 570-575nm   | 2.0-2.4V (2.2V) | 20mA | 330 Ohm   |

## Other Links
- [Running TX433 and RX433 RF modules with AVR microcontrollers](http://winavr.scienceprog.com/example-avr-projects/running-tx433-and-rx433-rf-modules-with-avr-microcontrollers.html)
- [MP3 Player Shield Hookup Guide V15](https://learn.sparkfun.com/tutorials/mp3-player-shield-hookup-guide-v15)
- [LED Series Resitor Calculator](https://www.digikey.com/en/resources/conversion-calculators/conversion-calculator-led-series-resistor)
- [LED Tutorial](https://learn.sparkfun.com/tutorials/light-emitting-diodes-leds)
- [AVRDUDE Tutorial](http://www.ladyada.net/learn/avr/avrdude.html)
- [picoPower Basics](http://www.atmel.com/Images/doc8349.pdf)
- [AVR Libc Home Page](http://www.nongnu.org/avr-libc/)

## ATtiny2313 pinout
![](http://arduinolearning.com/wp-content/uploads/2016/08/attiny2310arduino.jpg)
![](http://i.imgur.com/YVDlOae.png)

## BusPirate Reference

**NOTE TO SELF: run wire directly, ribbon cable does not work**

- SparkFun cable mapping

![](https://i.imgur.com/nHZgfFE.png)


| BusPirate Signal | AVR Signal | ISP pin (6) | BusPirate Cable<br/> Color (SparkFun) | ATtiny2313 Pin | ATmega328P pin |
|------------------|------------|-------------|----------------------------------|----------------|----------------|
| GND              | GND        | 6           | Black                            | 10             | 8              |
| +5V or +3.3V     | Vcc        | 2           | Grey or White                    | 20             | 7              |
| CS               | RESET      | 5           | Red                              | 1              | 1              |
| MOSI             | MOSI       | 4           | Pink / Orange                    | 17             | 17 (PB3)       |
| MISO             | MISO       | 1           | Brown                            | 18             | 18 (PB4)       |
| SCLK/CLK         | SCK        | 3           | Yellow                           | 19             | 19 (PB5)       |

- Using the BusPirate as a power source for the circuit

<img src='https://i.imgur.com/owis6JX.png' height='350px'/>

## AVRDUDE
- `avrdude -c buspirate -p attiny2313 -P COM3 -v`
- `avrdude -c buspirate -p attiny2313 -P COM3 -U flash:w:HelloWorld.hex`
