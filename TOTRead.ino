void setup() {
 Serial.begin(9600);
}

//아날로그는 입력값만

void loop() {

  int aRead = analogRead(A5);

  Serial.println(aRead);
  delay(1000);
}
