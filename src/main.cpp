#include <Arduino.h>

#include <Adafruit_MCP4725.h>
Adafruit_MCP4725 dac;
 
#define DAC_RESOLUTION    (9)   // Set this value to 9, 8, 7, 6 or 5 to adjust the resolution

// put function declarations here:
int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  dac.begin(0x60);  // Set jumper pad to GND
  
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("OK");
  dac.setVoltage((1 * 4095) / 3.3, false);    //Set voltage to 1V
  delay(2500);
  dac.setVoltage((1.5 * 4095) / 3.3, false);    //Set voltage to 1.5V
  delay(2500);
  dac.setVoltage((2 * 4095) / 3.3, false);    //Set voltage to 2V
  delay(2500);
  dac.setVoltage((2.5 * 4095) / 3.3, false);    //Set voltage to 2.5V
  delay(2500);
  dac.setVoltage((3 * 4095) / 3.3, false);    //Set voltage to 3V
  delay(2500);

}