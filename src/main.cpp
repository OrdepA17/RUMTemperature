#include <Arduino.h>

//Code structure to be used during the project following standard C and C++ coding practices

#define PIN_ANALOG_IN   27 //pin used for inputs
int a=0;  //test variable
void setup() {
  Serial.begin(9600);
}

void loop() {
  //code to test that the ESP32 is working and properly connected to the PC
  for(int i=0; i < 10; i++){
    Serial.println(a++);
     delay(1000);
  }
}