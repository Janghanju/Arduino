void setup() {
  Serial.begin(9600);
  pinMode(3, OUTPUT);
}

//Max : 1015
//MIN : 925

   int aMax = 1023;
   int aMin = 0;
   
void loop() {
  int ain = analogRead(A1);
  Serial.println(ain);
  if (ain >= 1000) {
    digitalWrite(3, HIGH);
    if(3 == HIGH) digitalWrite(3, LOW);
  } else digitalWrite(3, HIGH);


/*  
  if (ain 
  if(aMax < ain) aMax = ain;
  if(aMin > ain) aMin = ain;
  if(ain >= 112) analogWrite(3, HIGH);

     int aMax1 = 0;
     int aMin1 = 0;
     int value = map(ain,aMin,aMax,0,120);

     analogWrite(3, value);
     Serial.println(value);
     delay(500);
*/     
   }
