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
![image](https://user-images.githubusercontent.com/46954351/154846011-4580d7d3-fce0-4741-8cf1-722220458225.png)





An incubator is an infant stimulating system used for intensive care of the newborn, premature or sick baby.
It provides a safe and clean environment, which has fresh air, clean and sterile ambient conditions for the babies. 
In addition to these, the incubator environment provides a homogeneous and stable temperature, oxygen gas concentration that is needed especially for intensive care of the premature baby.
The main aim is to control the basic parameters of the incubator. Different sensors are used to measure various parameters. 
Light Dependent Resistor will be used to measure the light intensity, Temperature sensor will be used to measure the temperature continuously. 
LCD will display the current temperature & light intensity.
To display the temperature and intensity values, initially these values have to be converted into digital values. ADC is used to convert the analog parameters into digital values.
Whenever the temperature exceeds the set point, the cooling system will be turned on automatically and whenever the temperature falls below the rated value, the heaters will be switched on automatically. 


## High level requirements:
|ID	| Description|
|----|-----------|
|HLR1|Humidity Sensor to sense the temperature| 
|HLR2	|Temperature is above the rated value cooler is on |
|HLR3	|Temperature is below the rated value heater is on |

## Low level requirements:
|ID |	Description|
|----|-----------|
|LLR1|Display the value on LCD|
|LLR2	|LM35 to sense the humidity|













