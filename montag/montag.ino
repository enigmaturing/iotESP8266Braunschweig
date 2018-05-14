// Strg-R ---> Kompilieren
// Strg-T --> Quellcodebehübscher
// Strg-U --> Hochladen
#include <ESP8266WiFi.h>

void setup() {
  Serial.begin(115200);
  delay(100);
  Serial.println("-- App started --");
  setupmain();
}

void loop() {
  loopmain();
}
