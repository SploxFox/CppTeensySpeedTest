#include "Arduino.h"

long dur;

void setup()
{
  // initialize LED digital pin as an output.
  pinMode(LED_BUILTIN, OUTPUT);

  long start = millis();

  int x = 0;
  for (int i = 0; i < 1000000; i++) {
    x += i;
    Serial.println(x);
  }

  dur = millis() - start;

  Serial.println("Time (ms): ");
  Serial.print(dur);

}

void loop()
{
  Serial.println("Time (ms): ");
  Serial.println(dur);
  // turn the LED on (HIGH is the voltage level)
  digitalWrite(LED_BUILTIN, HIGH);

  // wait for a second
  delay(1000);

  // turn the LED off by making the voltage LOW
  digitalWrite(LED_BUILTIN, LOW);

   // wait for a second
  delay(1000);
}