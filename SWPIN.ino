#define SWPIN 7
#define LED 5
void setup() {
  pinMode(SWPIN, INPUT);
  Serial.begin(9600); 
  pinMode(LED, OUTPUT);
}

void loop() {
  if(digitalRead(SWPIN) == HIGH){
    digitalWrite(LED, HIGH);
    delay(100);
    digitalWrite(LED, LOW);
    delay(100);
    Serial.println("OK");
  } else{
    digitalWrite(LED, LOW);
    Serial.println("NO");
  }
  
}
