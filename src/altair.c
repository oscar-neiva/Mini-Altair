#include "Arduino.h"

int pin = 2;

void setup(){
    //Serial.begin(9600);//Inicia a comunicaço serial
    pinMode(pin, OUTPUT);//Porta PWM do led
}

void loop(){
    //valor = analogRead(A0);
    //valor = map(valor,0,1024,0,255);
    //Serial.println(valor);
    digitalWrite(pin, HIGH);
    //delay(50);
}