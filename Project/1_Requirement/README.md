## Abstract
The Water Level Indicator employs a simple mechanism to detect and indicate the water level in an overhead tank or any other water container.
The sensing is done by using a set of nine probes which are placed at nine different levels on the tank wallswith probe 9 to probe 1 placed in increasing order of height,
common probe that is the a supply carrying probe is placed at the base of the tank.The level 8 represents the “tank full” condition while level 0 represents the “tank empty” condition.

When the water-level is below the minimum detectable level (MDL), the seven segment display is arranged to show the digit 0, indicating that the tank is empty, when the water reaches level1
the connection between the probes gets completed and the base voltage of transistor increases.This causes the base-emitter junction of transistor to get forward biased, this switches transistor from cut-off to conduction mode thus PIN (B7) of microcontroller is pulled to ground hence, the corresponding digit displayed by the seven segment display is 1.

The similar mechanism applies to the detection of all the other levels. When the tank is full, all input pins of microcontroller become low. This causes the display to show 8 and also in this case a buzzer sound is given, thereby indicating a “tank full” condition.

Most water level indicators are equipped to indicate and detect only a single level. The Water Level Indicator implemented here can indicate up to nine such levels and the microcontroller displays the level number on a seven segment display.

So, the circuit not only capable of cautioning a person that the water tank has been filled up to certain level, but also indicates that the water level has fallen below the minimum detectable level. This circuit is important in appliances such as the water cooler where there is a danger of motor-burnout when there is no water in the radiator used up also it can be used in fuel level indication.








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


![image](https://user-images.githubusercontent.com/46954351/155764633-ae5cedb6-84c1-401c-9013-8fe16e40eb93.png)

