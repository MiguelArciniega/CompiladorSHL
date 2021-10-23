//>>> Compilado con ReloadStick <<<

#include <Ultrasonic.h>
#define pinLED 12

Ultrasonic ultrasonic(10,8,24500);

void setup() {
pinMode(pinLED,OUTPUT);
Serial.begin(9600);
}
void loop() {
int v = analogRead(A0);
Serial.println(ultrasonic.Ranging(CM));
Serial.println(" in");
if (ultrasonic.Ranging(CM)<=250 && ultrasonic.Ranging(CM)>= 51){
tone(9,440,200);
delay(9000);
}else{
if (ultrasonic.Ranging(CM)<= 50){
tone(9,440,200);
delay(300);
}else{
noTone(9);
}
}
if(v < 900){
digitalWrite(pinLED, HIGH);
}else{
digitalWrite(pinLED, LOW);
}
}