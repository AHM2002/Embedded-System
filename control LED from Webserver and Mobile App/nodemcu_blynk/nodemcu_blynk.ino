
#define BLYNK_PRINT Serial
#include<ESP8266WiFi.h>
#include<BlynkSimpleEsp8266.h>
#define BLYNK_AUTH_TOKEN "05deRdu3aReRQ_DCELxR3BvgP9jf9c6X"
char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "2002";
char pass[] = "milon8910";

BLYNK_WRITE(V0){
  digitalWrite(D0, param.asInt());
}
void setup() {
  pinMode(D0, OUTPUT);
  Blynk.begin(auth,ssid,pass,"blynk.cloud",80);
}
void loop() {
  Blynk.run();
}
