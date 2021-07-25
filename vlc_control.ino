#define BLYNK_PRINT Serial
//#define BLYNK_TEMPLATE_ID   "YourTemplateID"
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
char auth[]="your auth token";
char ssid[]="your wifi name";
char pass[]="wifi password";

void setup()
{
  Serial.begin(9600);
  Blynk.begin(auth,ssid,pass);
}

void loop()
{
  Blynk.run();
  if(digitalRead(16)==HIGH)
  {
    Serial.println("Play/Pause");
    delay(500);
  }
  if(digitalRead(5)==HIGH)
  {
    Serial.println("VolUp");
    delay(500);
  }
  if(digitalRead(4)==HIGH)
  {
    Serial.println("VolD");
    delay(500);
  }
  if(digitalRead(0)==HIGH)
  {
    Serial.println("Forward");
    delay(500);
  }
  if(digitalRead(2)==HIGH)
  {
    Serial.println("Rewind");
    delay(500);
  }
  if(digitalRead(14)==HIGH)
  {
    Serial.println("mute");
    delay(500);
  }
}
