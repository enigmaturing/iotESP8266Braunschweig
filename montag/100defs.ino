// Wemos nach Arduino
const byte D0 = 16;
const byte D1 = 5;             //  tft CS
const byte D2 = 4;             //  i2c scl
const byte D3 = 0;             //  i2c sda
const byte D4 = 2;             //  tft dc
const byte D5 = 14;            //  tft clk
const byte D6 = 12;            //  belegt wg. miso
const byte D7 = 13;            //  tft mosi
const byte D8 = 15;            //  tft reset

// eingebaute LED in ESP8266-12 Boards
// C: #define PinLED D2; C++: const byte PinLED = D2;
const byte PinLED = D4;

const char* WiFiSSID = "Seminar_203";      // The function WiFi.begin accepts an array of Chars (C like), and not a String object (C++ , Java like). That is why I declare the SSID as an array of characeters. 
const char* WiFiPassword = "vhsbsheyden";  // The function WiFi.begin accepts an array of Chars (C like), and not a String object (C++ , Java like). That is why I declare the SSID as an array of characeters. 
