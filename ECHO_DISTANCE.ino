#define TRIGER 4
#define ECHO 3
#define Speak 5
#define LED 6

void setup() {

  pinMode(ECHO, INPUT);
  pinMode(TRIGER, OUTPUT);
  pinMode(Speak, OUTPUT);
  pinMode(LED, OUTPUT);
  
  Serial.begin(9600);

}

void loop() {

  float duration, distance;

  digitalWrite(TRIGER, HIGH);
  delay(10);
  digitalWrite(TRIGER, LOW);

  duration = pulseIn(ECHO, HIGH);

  distance = (float)((duration * 340) / 10000) / 2;

  Serial.print(distance);
  Serial.println("cm");
  
  for(int i=10; i<=30; i++){
    if(distance < i){
      tone(Speak, i^1000, i^100);
      delay(i^200);
      digitalWrite(LED, HIGH);
      delay(i^30);
      digitalWrite(LED, LOW);
    }
  }

}
