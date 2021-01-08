#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>

#define LED 5
#define d_time 100
void setup(){
    pinMode(LED,OUTPUT);

}

void loop(){
    
    digitalWrite(LED,LOW);
    delay(d_time);
    digitalWrite(LED,HIGH);
    delay(d_time);
}