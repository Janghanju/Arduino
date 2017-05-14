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

//시리얼 모니터에서 출력값 입력하기
  String s = "";
  if(Serial.available()){
    while(Serial.available()){
      char c = Serial.read(); // char
      s += c; //입력된 알파벳을 문자열로 만들기
    }
  }
//

  myLCD.setCursor(0,0); // 커서를 위치 설정 (0, 0) = 첫줄 첫칸
  myLCD.print("Hello World");

  myLCD.setCursor(5,1); // 커서를 위치 설정 (0, 1) = 둘째줄 첫칸
  delay(1000);
  myLCD.print(count++);

  myLCD.setCursor(0,1);
  myLCD.print(s);

}
