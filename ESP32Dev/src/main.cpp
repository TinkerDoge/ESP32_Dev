#include <Arduino.h>
#define LED_BUILTIN 27
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(921600);
  Serial.println("Hello From The Setup");
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(1000);
  digitalWrite(LED_BUILTIN, HIGH);
  Serial.println("Hello from Loop");
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);

}
