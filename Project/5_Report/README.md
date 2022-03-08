
# CAR PARKING SYSTEM

## Table of contents

1_Description

* [Abstract](#abstract)

* [SWOT ANALYSIS](#swot-analysis)

* [Features](#features)

* [4W 1H](#4w-1h)

2_Requirements

* [Highlevel Requirements](#highlevel-requirements)
* [lowlevel Requirements](#lowlevel-requirements)


3_Block diagrams and components
* [Block diagram](#block-diagram)
* [Component Description](#component-description)
* [Structural Usecase diagram](#structural-usecase-diagram)
* [Behavioral Diagram](#behavioral-diagram)
* [Flowchart](#flowchart)
* [UML Diagram](#uml-diagram)

4.TestplanAndOutput
* [Highlevel testplan](#highlevel-testplan)
* [lowlevel testplan](#lowlevel-testplan)
* [outputs](#outputs)



5.Application and Advantages
* [Applications](#applications)
* [Advantages](#advantages)





## Abstract


Automatic car parking system solves many problems common to the urban environment. It reduces the space requirements necessary to provide a safe place for passengers to enter and exit the vehicle.

An innovative solution to this problem is the automatic car parking system. It allows users to park and retrieve their vehicle without driving. By automating this system, the vehicle can be stored in a smaller area that effectively eliminates the need for large ramps, stairs and driver lanes. It is an important technological innovation for this reason, and it benefits drivers as well as commercial office owners.


The automatic car parking system reduces the amount of effort required by the driver when entering the office parking garage. This improves the experience of daily parking, and it is seen as a perk by many employees. It is also a competitive solution for complex owners because it solves a variety of problems.

Drivers can reduce the commuting times between parking the car and entering the building, for example. This system also eliminates the traditional problems associated with locating a vehicle in a large parking garage. The APS is run by computerised sensors, which can detect vehicle
An automated (car) parking system(APS) is a area and/or volume required for parking cars. 
Like a multi-story parking garage, an APS provides parking for cars on multiple levels stacked 
vertically to maximize the number of parking spaces while minimizing land usage. The APS, 
is more similar to an automated storage and retrieval system for cars. 




## SWOT ANALYSIS

 

![image](https://user-images.githubusercontent.com/46954351/157083656-14e0f1f1-b63a-4977-b900-b38d2e25a1d0.png)


## Features

Servo motor shall be provided to enter and exit of the car
Automatic gate opening and closing shall be provided by gate sensor along with IR signal
LCD Display shall be provided to know the working of the system
IR sensor shall be provided to detect the car that comes in front of the gate


## 4W 1H

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
 
 
 





## Highlevel requirements

|ID|Description|
|--|----------------------|
|HLR_1|It shall controll automatic entry and exit of the car.|
|HLR_2|It shall count the available space for parking.|


## Lowlevel requirements
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


## Structural Usecase diagram
![image](https://user-images.githubusercontent.com/46954351/157271166-5e97cfa3-24f9-4b55-aac1-bd581cc143c5.png)


## Behavioral Diagram

![image](https://user-images.githubusercontent.com/46954351/157270264-3dbfa022-1500-4907-bb2a-2543ada308b3.png)


## Flowchart

![image](https://user-images.githubusercontent.com/46954351/157219021-c7989b69-223a-46e6-ac18-9d01cf58d252.png)


## UML diagram

![image](https://user-images.githubusercontent.com/46954351/157170507-1f11bd6b-4ad9-4911-b77b-e5eab3996f70.png)



## Highlevel testplan


|Test ID|Description|input|actual output|expected output|implemented or not|
|-------|-----------|------|------------|----------------|-----------------|
|1|IR sensor|supply|detecting of motion|motion detected|implemented|
|2|servo motor|supply|rotation of motor|motor rotated|implemented|
|3|ultrasonic sensor|supply|detection of space|space detected|implemented|


## Lowlevel testplan

|Test ID|Description|implemented or not|
|-------|-----------|------------------|
|1|IR sensor detects the motion of the car|implemented|
|2|SERVO motor operates based on the instructions of IR signal|implemented|
|3|Ultra sonic sensor count the available space for parking|implemented|
|4|LCD display's output of working for the instructions of sensors|implemented|
|5|Gate sensor to automaticaly open and close gate based on the instruction of IR signal|implemented|

## outputs
![simulation](https://user-images.githubusercontent.com/46954351/157299788-dc394b0f-9b98-4cd7-bade-ba2c54d1e858.PNG)
![no entry and exit of car](https://user-images.githubusercontent.com/46954351/157299657-53bc9a24-734e-4cc4-9d00-f92206cd7e74.PNG)
![no parking space](https://user-images.githubusercontent.com/46954351/157299703-2b808ef8-76ba-4b49-8250-a868424387fc.PNG)
![one car exited](https://user-images.githubusercontent.com/46954351/157299730-8cca0e05-b061-4ed8-a4a7-841e651b1af2.PNG)




## Applications
* The automatic car parking system could be used for residential buildings,hotels,offices,shopping center,show rooms,universities,government buildings,airports,hospitals,and stadium,etc.


## Advantages
*  The hassle of searching for the empty space would be reduced.
*  Providing security and safety for the car from theft and damages while parking
*  Automatically senses the entry and exit of cars.
*  The plot area required foe automatic parking system is  less as compared to typical conventional car parking system
  	


