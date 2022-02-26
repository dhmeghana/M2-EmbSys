## Block Diagram


![block diagram](https://user-images.githubusercontent.com/46954351/155751403-6aea9147-c103-4113-ade7-d12732ddf2ee.PNG)

## Components

* Atmega8 Microcontroller
* BC547 NPN Transistor
* Resistors
* 7 Segment Display
* Buzzer
* Probe sensor
* supply


## Component Description 


* 7 Segment Display: Seven segment display is connected to PORT of microcontroller.The Output for the 7th level is not only shown on seven segment display but also indicated with a discontinuous buzzer sound.Output for the 8th level (i.e. tank full condition) is not only shown in seven segment display but also indicated with a continuous buzzer sound.


* BC547 NPN Transistor :The use of transistor is it acts as inverter i.e. in on state gives low voltage at output and in non conducting state gives high voltage at its output, all transistors outputs are connected to PORTS of microcontroller.

* Probe sensor :The Water Level Indicator employs a simple mechanism to detect and indicate the water level in an overhead tank or any other water container.
The sensing is done by using a set of nine probes which are placed at nine different levels on the tank walls with probe 9 to probe 1 placed in increasing order of height, common probe i.e. a supply carrying probe is placed at the base of the tank.

* Buzzer :A buzzer is added which will automatically start as the water level becomes full, auto buzzer start with the help of microcontroller.When the container is full the buzzer rings continuous.When the container is empty the buzzer does not rings.When the container is about to fill the buzzer ring is discontinuous.

* Supply :A constant 5v power supply is given to the microcontroller and rest of the circuit from a battery.

* ATmega8: ATmega8 is a low-power CMOS 8-bit microcontroller based on the AVR RISC architecture. By executing powerful instructions in a single clock cycle, the ATmega8 achieves throughputs approaching 1 MIPS per MHz, allowing the system designer to optimize power consumption ver- sus processing speed.




## Flowchart


![flowchart](https://user-images.githubusercontent.com/46954351/155751704-dc4d0b5f-dd97-4972-8b5d-dbf9e31b2b0e.PNG)


