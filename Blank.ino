void setup() {
 pinMode(12, OUTPUT); 

}
//
void loop() {
//
// digitalWrite(12, HIGH);
// delay(2000);
// digitalWrite(12, LOW);
// delay(2000);
 for(int i = 0; i < 255; i++) {
  analogWrite(12,i);
 }
 for(int i = 255; i > 0; i--) {
  analogWrite(12,i);
 }
}
