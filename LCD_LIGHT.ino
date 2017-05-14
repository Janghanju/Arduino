#include <LiquidCrystal.h>

LiquidCrystal myLCD(7,8,9,10,11,12);

void setup() {

  myLCD.begin(16, 2); // 16x2 LCD 설정
  myLCD.clear(); // 초기화
  Serial.begin(9600);
//  myLCD.print("Hello World");
  
}

int count = 0;

void loop() {

  myLCD.clear();
  int light = analogRead(A5);

  myLCD.setCursor(0,0);
  myLCD.print("Current Light");

  myLCD.setCursor(0,1);
  myLCD.print(light);

  delay(500);
}
