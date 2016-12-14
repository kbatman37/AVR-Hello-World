# AVR-Hello-World
Files in `HelloWorld` are files created mostly when following the [Getting Started With AVR](https://www.youtube.com/playlist?list=PLtQdQmNK_0DRhBWYZ32BEILOykXLpJ8tP) videos from Atmel

## Useful Links
- [Official Documentation](http://www.atmel.com/devices/ATtiny2313.aspx?tab=documents)
	- [Summary](http://www.atmel.com/Images/Atmel-2543-AVR-ATtiny2313_Summary.pdf)
	- [Complete Datasheet](http://www.atmel.com/Images/Atmel-2543-AVR-ATtiny2313_Datasheet.pdf)
	- [picoPower Basics](http://www.atmel.com/Images/doc8349.pdf)
- [AVR Libc Home Page](http://www.nongnu.org/avr-libc/)

## Other Links
- [Running TX433 and RX433 RF modules with AVR microcontrollers](http://winavr.scienceprog.com/example-avr-projects/running-tx433-and-rx433-rf-modules-with-avr-microcontrollers.html)
- [MP3 Player Shield Hookup Guide V15](https://learn.sparkfun.com/tutorials/mp3-player-shield-hookup-guide-v15)
- [LED Series Resitor Calculator](https://www.digikey.com/en/resources/conversion-calculators/conversion-calculator-led-series-resistor)
- [LED Tutorial](https://learn.sparkfun.com/tutorials/light-emitting-diodes-leds)
- [AVRDUDE Tutorial](http://www.ladyada.net/learn/avr/avrdude.html)

## ATtiny2313 pinout
![](http://arduinolearning.com/wp-content/uploads/2016/08/attiny2310arduino.jpg)
![](http://i.imgur.com/YVDlOae.png)

## Parts
- [ATtiny2313](https://www.digikey.com/product-detail/en/atmel/ATTINY2313-20PU/ATTINY2313-20PU-ND/1008418)
- [Transmitter: WRL-10534](https://www.digikey.com/product-detail/en/sparkfun-electronics/WRL-10534/1568-1175-ND/5673761)
- [Receiver: WRL-10532](https://www.digikey.com/product-detail/en/sparkfun-electronics/WRL-10532/1568-1173-ND/5673759)
- [Speakers: GF0668](https://www.digikey.com/product-detail/en/cui-inc/GF0668/GF0668-ND/304440)
- [N-Channel MOSFET: FQP30N06L](https://www.sparkfun.com/products/10213)
- [LED: COM-12062](https://www.sparkfun.com/products/12062)

## BusPirate Reference
- SparkFun cable mapping
![](https://i.imgur.com/nHZgfFE.png)
- [Pin mapping to AVR](http://dangerousprototypes.com/docs/Bus_Pirate_AVR_Programming)
![](https://i.imgur.com/kDTiDIe.png)

| BusPirate Signal | AVR Signal | ISP pin (6) | BusPirate Cable Color (SparkFun) | ATtiny2313 Pin | ATmega328P pin |
|------------------|------------|-------------|----------------------------------|----------------|----------------|
| GND              | GND        | 6           | Black                            | 10             | 8              |
| +5V or +3.3V     | Vcc        | 2           | Grey or White                    | 20             | 7              |
| CS               | RESET      | 5           | Red                              | 1              | 1              |
| MOSI             | MOSI       | 4           | Pink / Orange                    | 17             | 17 (PB3)       |
| MISO             | MISO       | 1           | Brown                            | 18             | 18 (PB4)       |
| SCLK/CLK         | SCK        | 3           | Yellow                           | 19             | 19 (PB5)       |