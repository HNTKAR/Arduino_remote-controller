#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
#include "network.h"
#include "LittleFS.h" 

#define LED 5
#define d_time 100

int addr=0;

ESP8266WebServer server(80);

void rootfanc(){
    String testmessage="\
    <!DOCTYPE html>\n\
    <html lang = \"ja\">\n\
    <head>\n\
    <title>test page</title>\n\
    </head>\n\
    <body>\n\
    OK!!\n\
    </body>\n\
    </html>\n\
";
server.send(200,"txt/html",testmessage);
}

void setup()
{
    pinMode(LED, OUTPUT);
    Serial.begin(115200);
    Serial.println("");
    Serial.print("SSID= ");
    Serial.print(Nname);
    Serial.print(" Pass= ");
    Serial.println(Npass);
    WiFi.begin(Nname,Npass);
    Serial.print("Connecting");
    while (WiFi.status()!=WL_CONNECTED)
    {
        delay(500);
        Serial.print(".");
    }
    Serial.println();
    Serial.print("Local IP is ");
    Serial.println(WiFi.localIP());
    server.on("/",rootfanc);
}

void loop()
{
    server.handleClient();
}
