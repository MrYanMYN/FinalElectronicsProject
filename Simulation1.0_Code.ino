#include <Servo.h>


const int C2 = 65;
const int Db2 = 69;
const int D2 = 73;
const int Eb2 = 78;
const int E2 = 82;
const int F2 = 87;
const int Gb2 = 93;
const int G2 = 98;
const int Ab2 = 104;
const int AA2 = 110;
const int Bb2 = 117;
const int B2 = 123;
const int C3 = 131;
const int Db3 = 139;
const int D3 = 147;
const int Eb3 = 156;
const int E3 = 165;
const int F3 = 175;
const int Gb3 = 185;
const int G3 = 196;
const int Ab3 = 208;
const int AA3 = 220;
const int Bb3 = 233;
const int B3 = 247;
const int C4 = 262;
const int Db4 = 277;
const int D4 = 294;
const int Eb4 = 311;
const int E4 = 330;
const int F4 = 349;
const int Gb4 = 370;
const int G4 = 392;
const int Ab4 = 415;
const int AA4 = 440;
const int Bb4 = 466;
const int B4 = 494;
const int C5 = 523;
const int Db5 = 554;
const int D5 = 587;
const int Eb5 = 622;
const int E5 = 659;
const int F5 = 698;
const int Gb5 = 740;
const int G5 = 784;
const int Ab5 = 831;
const int AA5 = 880;
const int Bb5 = 932;
const int B5 = 988;
const int C6 = 1047;
const int Db6 = 1109;
const int D6 = 1175;
const int Eb6 = 1245;
const int E6 = 1319;
const int F6 = 1397;
const int Gb6 = 1480;
const int G6 = 1568;
const int Ab6 = 1661;
const int AA6 = 1760;
const int Bb6 = 1865;
const int B6 = 1976;


const int buzzerPin = 3;
const int ledPin1 = 12;
const int ledPin2 = 13;

Servo servo1;
Servo servo2;

int counter = 0;
 
int pos = 0;

void setup()
{
  //Setup pin modes
  pinMode(buzzerPin, OUTPUT);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  servo1.attach(9, 500 ,500);
  servo2.attach(6, 500 ,500);
}
 
void loop()
{
  firstSection();
  firstSection();
  secondSection();
  thirdSection();
  thirdSection();
  for (pos = 0; pos <= 180; pos += 1) {
    servo2.write(pos);
    servo1.write(pos);
    delay(15); 
  }
  for (pos = 180; pos >= 0; pos -= 1) {
    servo1.write(pos);
    servo2.write(pos);
    delay(15); 
  }
}
 
void beep(int note, int duration)
{
  //Play tone on buzzerPin
  tone(buzzerPin, note, duration);
 
 
  //Play different LED depending on value of 'counter'
  if(counter % 2 == 0)
  {
    digitalWrite(ledPin1, HIGH);
    delay(duration);
    digitalWrite(ledPin1, LOW);
  }else
  {
    digitalWrite(ledPin2, HIGH);
    delay(duration);
    digitalWrite(ledPin2, LOW);
  }
 
  //Stop tone on buzzerPin
  noTone(buzzerPin);
 
  delay(50);
 
  //Increment counter
  counter++;
}
 
void firstSection()
{
  beep(AA3, 200);
  beep(AA3, 200);
  beep(C4, 200);
  beep(AA3, 200);
  beep(D4, 200);
  beep(AA3, 200);
  beep(E4, 200);
  beep(D4, 200);
  beep(C4, 200);
  beep(C4, 200);
  beep(E4, 200);
  beep(C4, 200);
  beep(G4, 200);
  beep(C4, 200);
  beep(E4, 200);
  beep(C4, 200);
  beep(G3, 200);
  beep(G3, 200);
  beep(B3, 200);
  beep(G3, 200);
  beep(C4, 200);
  beep(G3, 200);
  beep(D4, 200);
  beep(C4, 200);
  beep(F3, 200);
  beep(F3, 200);
  beep(AA3, 200);
  beep(F3, 200);
  beep(C4, 200);
  beep(F3, 200);
  beep(C4, 200);
  beep(B3, 200);
  
}
void secondSection()
{
  beep(AA3, 325);
  beep(AA3, 325);
  beep(AA3, 325);
  beep(AA3, 325);
  beep(G3, 200);
  beep(C4, 200);
  beep(AA3, 325);
  beep(AA3, 325);
  beep(AA3, 325);
  beep(AA3, 325);
  beep(G3, 200);
  beep(E3, 200);
  beep(AA3, 325);
  beep(AA3, 325);
  beep(AA3, 325);
  beep(AA3, 325);
  beep(G3, 200);
  beep(C4, 200);
  beep(AA3, 325);
  beep(AA3, 325);
  beep(AA3, 200);
  beep(AA3, 75);
  beep(AA3, 325);
  beep(AA3, 450);
}

void thirdSection()
{
  beep(AA3, 75);
  beep(E4, 200);
  beep(AA3, 75);
  beep(C4, 200);
  beep(AA3, 75);
  beep(Bb3, 200);
  beep(AA3, 75);
  beep(C4, 200);
  beep(AA3, 75);
  beep(Bb3, 75);
  beep(G3, 200);
  beep(AA3, 75);
  beep(E4, 200);
  beep(AA3, 75);
  beep(C4, 200);
  beep(AA3, 75);
  beep(Bb3, 200);
  beep(AA3, 75);
  beep(C4, 200);
  beep(AA3, 75);
  beep(Bb3, 75);
  beep(G3, 200);
  beep(AA3, 75);
  beep(E4, 200);
  beep(AA3, 75);
  beep(C4, 200);
  beep(AA3, 75);
  beep(Bb3, 200);
  beep(AA3, 75);
  beep(C4, 200);
  beep(AA3, 75);
  beep(Bb3, 75);
  beep(G3, 200);
  beep(AA3, 75);
  beep(E4, 200);
  beep(AA3, 75);
  beep(C4, 200);
  beep(G3, 75);
  beep(G3, 200);
  beep(G3, 75);
  beep(AA3, 200);
  beep(AA3, 450);
}
