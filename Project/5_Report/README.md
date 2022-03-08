
# CAR PARKING SYSTEM

## Table of contents

1.About the project
* Abstract
* Features
* SWOT Analysis
* 4W'S AND 1H
* state of Art

2.Requirements
* High level requirements
* Low level requirements

3.Block diagrams and components
* Block diagram
* components description
* Structural diagram
* Flow chart
* UML diagram

4.TestplanAndOutput
* Highlevel testpaln
* lowlevel testplan
* outputs

5.Application and Advantages





## Abstract


Automatic car parking system solves many problems common to the urban environment. It reduces the space requirements necessary to provide a safe place for passengers to enter and exit the vehicle.

An innovative solution to this problem is the automatic car parking system. It allows users to park and retrieve their vehicle without driving. By automating this system, the vehicle can be stored in a smaller area that effectively eliminates the need for large ramps, stairs and driver lanes. It is an important technological innovation for this reason, and it benefits drivers as well as commercial office owners.


The automatic car parking system reduces the amount of effort required by the driver when entering the office parking garage. This improves the experience of daily parking, and it is seen as a perk by many employees. It is also a competitive solution for complex owners because it solves a variety of problems.

Drivers can reduce the commuting times between parking the car and entering the building, for example. This system also eliminates the traditional problems associated with locating a vehicle in a large parking garage. The APS is run by computerised sensors, which can detect vehicle
An automated (car) parking system(APS) is a area and/or volume required for parking cars. 
Like a multi-story parking garage, an APS provides parking for cars on multiple levels stacked 
vertically to maximize the number of parking spaces while minimizing land usage. The APS, 
is more similar to an automated storage and retrieval system for cars. 



Features
|-------|
|Servo motor shall be provided to enter and exit of the car|
|Automatic gate opening and closing shall be provided by gate sensor along with IR signal|
|LCD Display shall be provided to know the working of the system|
|IR sensor shall be provided to detect the car that comes in front of the gate|

## SWOT ANALYSIS

 

![image](https://user-images.githubusercontent.com/46954351/157083656-14e0f1f1-b63a-4977-b900-b38d2e25a1d0.png)


## 4W'S  and 1H

## Who
 User who need to park their vehicle especically in metroploitan cities

## What
 automatic parking system aims to enhance the comfort and safety of driving in constrained environments.

## When
It is used to navigate the driver to reach the desired space in an effective manner, thus reducing search time.

## Where
It is required for many big complexes,malls specifically in huge cities.
 
 ## How
 Based on the sensors used user can know the space and automatic entry and exit of vehicle.
 
 
 
## State of art

An automated parking system is a area or volume required for parking cars. Automated Parking System provides parking for cars on multiple levels stacked vertically to maximize the number of parking spaces while minimizing land usage. so we have deployed a microcontroller which is used to sense the movement of cars and it either Free space is there or not. It is possible to free space when any car enters in the parking lot or close the gate when a car exits from the parking lot. The sensing of entry and exit of cars is done with the help of IR transmitters and receivers. This change in output is sensed by the microcontroller and accordingly it increments and decrement the count and opens the gate if there is space. The procedure for the exit of the cars is similar as the entry.





## High level requirements

|ID|Description|
|--|----------------------|
|HLR_1|It shall controll automatic entry and exit of the car.|
|HLR_2|It shall count the available space for parking.|


## Low level requirements
|ID|Description|Category|
|--|------------|---------|
|LLR_1|SERVO motor operates based on the instructions of IR signal|HLR_1|
|LLR_2|IR sensor detects the motion of the car|HLR_1|
|LLR_3|Gate sensor to automaticaly open and close gate based on the instruction of IR signal|HLR_1|
|LLR_4|Ultra sonic sensor count the available space for parking|HLR_2|
|LLR_5|LCD display's output of working for the instructions of sensors|HLR_2|


## Block Diagram

![image](https://user-images.githubusercontent.com/46954351/157084968-b6faa0cf-c551-4c76-913b-7e3f233dcd21.png)





## Component Description

* Servo motor:
A servo motor is rotary actuator or linear actuator that allows for precise control of angular or linear position, velocity and acceleration.servo can rotate approximately 180 degree,it hasan operating voltage of 5 volt.

* LCD :
LCD screen is flat-panel display, electronic visual display that uses the light-modulating properties of liquid crystals and LCD's are available to display arbitrary images,preset words,digits,and 7-segment displays.

* Infrared sensor:
IR sensor which emits in order to sense some aspects of the surroundings.and it can can measure the heat of an object-as well as detects the motion.

* Gate sensor:
It consists of one reed switch and one magnet creating a close circuit.if IR sensor gives signal that magnet awy from the switch which breaks the circuit and triggers when the gate is in open state the function will won't work,it works only when it is closed state.

* Ultrasonic sensor:
It is economical sensor provides 2.5cm to 400cm of non-contact measurement functionality with a ranging accuracy that can reach upto 3mm.and it includes an ultrasonic transmitter,a receiver and a control circuit.



* EEPROM:
Here this is actually inside the microcontroller.

* MicroController:
This is the brain of the system here we use arduino uno every computation is done inside this controller it converts analog to digital and maps certain values, it controls LCD display, it sends PWM signals to servo motor.


## Structural diagram

![image](https://user-images.githubusercontent.com/46954351/157170270-43a7c968-9b1c-4d47-87b2-8da1e85f5e3d.png)






## Flowchart


![image](https://user-images.githubusercontent.com/46954351/157084552-cfca1475-f75f-4e99-86f8-24c9aa62f803.png)


## UML diagram

![image](https://user-images.githubusercontent.com/46954351/157170507-1f11bd6b-4ad9-4911-b77b-e5eab3996f70.png)









## Applications
* The automatic car parking system could be used for residential buildings,hotels,offices,shopping center,show rooms,universities,government buildings,airports,hospitals,and stadium,etc.


## Advantages
*  There is no need for driver while looking for an available space.
*  	Providing security and safety for the car from theft and damages while parking
*  	Automatically senses the entry and exit of cars.
*  	There is a minimal staff requirement if it is used by known parkers.
  	


