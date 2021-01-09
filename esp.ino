#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
#include "network.h"

#define LED 5
#define d_time 1000

void setup(){
    pinMode(LED,OUTPUT);
    Serial.begin(115200);
    Serial.println("");
    Serial.println(Npass);

}

void loop(){
    
    digitalWrite(LED,LOW);
    delay(d_time);
    digitalWrite(LED,HIGH);
    delay(d_time);
}