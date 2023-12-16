#include <Arduino.h>
// #include <termout.h>
#define BLINKLED 13

void setup() {
  // put your setup code here, to run once:
  // Serial monitor test
  Serial.begin(9600);
  Serial.println("Start");
  
  // set PIN 13 of blinking LED as OUTPUT
  pinMode(BLINKLED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(BLINKLED, LOW);
  // Serial.println("The blinkin LED is off");
  delay(2000);
  digitalWrite(BLINKLED, HIGH);
  // Serial.println("The blinkin LED is on");
  delay(4000);
  /* Just checking an own lib 'termout.cpp'
  serialDumpTime();
  */
 /* test of arduino function 'millis()'
    millis() counts milli seconds since start of program
 Serial.print("ms since start: ");
 Serial.println(millis());
 */
}