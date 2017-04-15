#define SEG_A 2
#define SEG_B 3
#define SEG_C 4
#define SEG_D 5
#define SEG_E 6
#define SEG_F 7
#define SEG_G 8

#define Speak 11

int segs[] = { SEG_A,SEG_B,SEG_C,SEG_D,SEG_E,SEG_F,SEG_G };

int Buzzer1[] = { 32, 34, 36, 38, 41, 43, 46, 48, 51, 55, 58, 61 }

byte numbers[] = {
  B0111111,
  B0000011,
  B1011011,
  B1001111,
  B1100110,
  B1101101,
  B1111101,
  B0000111,
  B1111111,
  B1101111,  
};

void setup() {
  for(int i=SEG_A; i<=SEG_G; i++) {
  pinMode(i, OUTPUT);
  }

Serial.read();
}

void loop() {

for(int j=0; j<9; j++){
  for(int i=0; i<7; i++){
    int bit=bitRead(numbers[j],i);
    digitalWrite(segs[i],bit);  
  }
  for(int k=0; k<12; k++){
  int aaa = Serial.read();
  int 
  tone(11,
  }
  tone(11,500,1000);
  delay(1000);
}
}
