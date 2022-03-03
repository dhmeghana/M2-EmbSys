## Abstract



The water level indicator uses a simple mechanism to detect and display the water level in  overhead tanks . Detection is done  using a set of nine probes  placed on nine different levels of the tank wall. Probes 9 through 1 are arranged in ascending order of height, and the common probe  is the utility-carrying probe, which is  at the base level. 8 represents the status "tank is full" and level 0 represents the status "tank is empty".

When the water level drops below the minimum detectable level, the 7-segment display shows the number 0, indicating that the tank is empty
A similar mechanism applies to all other levels of detection. When the tank is full, all input pins on the microcontroller are low. As a result, an 8 will appear on the display, again with a buzzer to indicate that the tank is full.

Most water level indicator are designed to display and detect only a single water level. The water level indicator implemented here can display up to nine such levels, and the microcontroller displays the level number on a 7-segment display.

Therefore, the circuit can not only warn a person that the water tank has been filled  to a certain level, but can also indicate that the water level is below the minimum detectable level. This circuit is important for equipment such as  water coolers where there is a risk of the engine burning out if the used cooler is out of water and can also  be used to indicate fuel levels.



Features
|-------|
|Easy installation|
|Low maintenance|
|The Automatic water level controller ensures no overflows or dry running of pump there by saves electricity and water|
|Avoid seepage of roofs and walls due to overflowing tanks|
|Fully automatic, saves man power|
|Consume very little energy, ideal for continuous operation|
|Shows clear indication of water levels in the overhead tank|

## SWOT ANALYSIS

![image](https://user-images.githubusercontent.com/46954351/155833495-0b6002f8-f614-4d76-b291-3c701538b393.png)



## 4W'S  and 1H

## Who
Users to know the level of liquid in huge containers placed at Hotels,commericial complexes,Industries.

## What
Is used to detect and indicate the water level in an overhead tank or any other water container.

## When
User wants to know the  level of the liquid in the container,which cannot be done manually.

## Where
Fuel level indicator in vehicles,Liquid level indicator in the huge containers in the companies.
 
 ## How
 
 When level of liquid detection cannot be done manually,it helps the users to do so with the help of Buzzer


## High level requirements

|ID|Description|
|--|----------------------|
|HLR_1|Should sense the water level autoimatically|
|HLR_2|Should display the water level on 7 segmant display|
|HLR_3|Should Ring the buzzer accordingly|

## Low level requirements
|ID|Description|Category|
|--|------------|---------|
|LLR_1|The sensing is done by using a set of nine probes|HLR_1|
|LLR_2|when the container is empty it displays zero|HLR_2|
|LLR_3|When the container is intermediate it displays highest value|HLR_2|
|LLR_4|When the container is full it displays 1|HLR_2|
|LLR_5|When container is empty buzzer does not rings|HLR_3|
|LLR_6|When it is about to fill buzzer ring is discontinuous|HLR_3|
|LLR_7|When it is full the buzzer rings continuously|HLR_3|


## Applications

* Automatic Water level Controller can be used in Hotels, Factories, Homes Apartments, Commercial Complexes, Drainage, etc., It can be fixed for single phase motor, Three Phase motors.
* Fuel level indicator in vehicles.
* Liquid level indicator in the huge containers in the companies.
* Automatic water level controller will automatically START the pump set as soon as the water level falls below the predetermined level (usually 1/2 tank) and shall SWITCH OFF the pump set as soon as tank is full.

