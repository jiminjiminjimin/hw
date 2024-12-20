//2021112030 황지민
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2); 
int d;
int triggerPin = 7;
int echoPin = 6;
 
void setup(){
  Serial.begin(9600);
  lcd.init();
  lcd.backlight();
  pinMode(triggerPin,OUTPUT);
  pinMode(echoPin,INPUT);
  
}

void loop(){
  
  digitalWrite(triggerPin,1);
  delayMicroseconds(10);
  digitalWrite(triggerPin,0);
  d=pulseIn(echoPin,1)/58;
  
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Distance : ");
  lcd.print(d);
  lcd.print("cm");
  lcd.setCursor(0,1);  
  lcd.print("hwangjimin");
  delay(500);
}
