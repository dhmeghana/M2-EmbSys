## CASE STUDY-1  Airport Security Luggage Scanner System with Conveyer Belt Arrangement

## BLOCK DIAGRAM
![image](https://user-images.githubusercontent.com/46954351/154845376-717ec531-e1a4-4ad7-99ff-a83eea942365.png)





Security is a prime concern in airports, temples, museums and theaters. 
It scans the metal objects and produces a beep sound for audio indication.
It uses Colpitts oscillator as its main circuit. Transistor based Colpitts oscillator is designed to generate RF frequency. 
This RF output is amplified by RF amplifier section. An NPN transistor is used as switch. 
Whenever a metal is detected, RF frequency is generated and this is amplifier by the RF amplifier section. 
This amplified signal sends a control signal to the NPN switching transistor. 
The transistor is operated in saturation and cut off mode to work as a switch.
This transistor drives the small DC buzzer. A geared DC motor with 60RPM is used to control the conveyer belt. 
Robotic free balance wheel is used to support the conveyer belt on the other end.
Bridge type full wave rectifier is used to rectify the ac output of secondary of 230/18V step down transformer. 



## High level requirements:
|ID	| Description|
|----|-----------|
|HLR1|Transistor based Colpitts oscillator is designed to generate RF frequency| 
|HLR2	|Whenever a metal is detected  RF frequency is generated |
|HLR3	|A geared DC motor with 60RPM is used to control the conveyer belt |


## Low level requirements:
|ID |	Description|
|----|-----------|
|LLR1|RF amplifier is used to amplify the RF frequency generated|
|LLR2	|buzzer rings on detection  |
|LLR3|Bridge type full wave rectifier is used to rectify the ac output|






## CASE STUDY-2  TEMPERATURE AND LIGHT CONTROL OF AN INCUBATOR

## BLOCK DIAGRAM:













