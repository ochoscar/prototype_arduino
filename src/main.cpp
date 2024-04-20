#include <Arduino.h>

int LEDpin = 13; 
int delayT = 1000; 
char a;

/*void setup() { 
    // put your setup code here, to run once: 
    pinMode(LEDpin, OUTPUT); 
} 

void loop() { 
    // put your main code here, to run repeatedly: 
    digitalWrite(LEDpin, HIGH); 
    delay(delayT); 
    digitalWrite(LEDpin, LOW); 
    delay(delayT); 
}*/


void setup() {
  Serial.begin(9600);
}


void loop() {
    String str = "";
    Serial.print("Message: ");
    while (a != '\n') {
        if(Serial.available()) {
            a = Serial.read();
            str += a;
            Serial.print(a);
        }
    }
    Serial.print("Complete Message: " + str);
    Serial.println("Hello World");
    delay(delayT); 
    a = ' ';
}