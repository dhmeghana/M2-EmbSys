/**
 * @file carparking.h
 * @author Meghana DH (Meghana DH@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-03-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */



#include <LiquidCrystal.h> //  library initialization with the number of the interface pins
LiquidCrystal lcd(A0, A1, A2, A3, A4, A5);
#include <Servo.h> // servo library

Servo myservol;

int ir_sl = 2; // IR sensor
int ir_s2 = 4;

int Total = 5; // space available for parking
int space;

int flag1 = 0;
int flag2 = 0;

void setup() {
pinMode(ir_sl, INPUT);
pinMode(ir_s2, INPUT);

myservol.attach(3); //  pin number of servo motor
myservol.write(100);

lcd.begin(16, 2);
lcd.setCursor (0,0);
lcd.print(" Car Parking ");
lcd.setCursor (0,1);
lcd.print(" System ");
delay (2000);
lcd.clear();

space = Total;
}

void loop(){

if(digitalRead (ir_sl) == LOW && flag1==0){
if(space>0){flag1=1;
if(flag2==0){myservol.write(0); space = space-1;} // space is decremented when car enters
}else{
lcd.setCursor (0,0);
lcd.print(" sorry not space "); // car parking system is full 
lcd.setCursor (0,1);
lcd.print(" Available ");
delay(1000);
lcd.clear();
}
}


if(digitalRead (ir_s2) == LOW && flag2==0){flag2=1;
if(flag1==0){myservol.write(0); space =space+1;} // space increses when the car exit 
}

if(flag1==1 && flag2==1){
 delay(1000);
myservol.write(100);
flag1=0, flag2=0;
}

lcd.setCursor (0,0);
lcd.print(" Total space: "); 
lcd.print(Total);

lcd.setCursor (0,1);
lcd.print(" Have space: ");
lcd.print(space);
}
