#include "Arduino.h"

void setup() {
 pinMode(LED_BUILTIN, OUTPUT);
 delay(3000);
 Serial.begin(115200);
 Serial.println();
}
#if 0
void loop() {
 server.handleClient();
} 
#endif
void loop() {
   digitalWrite(LED_BUILTIN, 1);
   Serial.println("on");
   delay(500); // in msec
   digitalWrite(LED_BUILTIN, 0);
   Serial.println("off");   
   delay(500);
}
