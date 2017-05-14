#include <LiquidCrystal.h>

LiquidCrystal myLCD(7,8,9,10,11,12);

void setup() {

  myLCD.begin(16, 2); // 16x2 LCD 설정
  myLCD.clear(); // 초기화
//  myLCD.print("Hello World");
  
}

void loop() {

  myLCD.setCursor(0,0); // 커서를 위치 설정 (0, 0) = 첫줄 첫칸
  myLCD.print("Hello World");

  myLCD.setCursor(0,1); // 커서를 위치 설정 (0, 1) = 둘째줄 첫칸
  myLCD.setCursor(5,1); // 커서를 위치 설정 (5, 1) = 둘째줄 6번째칸
  myLCD.print("Korea");
  
}
