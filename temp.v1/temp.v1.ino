#include <OneWire.h>

#include <DallasTemperature.h>

float temp = 0.0; 
int oneWireBus = 12; 
OneWire oneWire(oneWireBus); 
DallasTemperature sensors(&oneWire); 

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, LOW); 

  Serial.begin(9600);
  Serial.println("Bas on Tech - 1 wire temperature sensor"); 
  sensors.begin(); 

}

void loop() {
  // put your main code here, to run repeatedly:
  sensors.requestTemperatures(); 
  temp = sensors.getTempFByIndex(0); 

  Serial.print("Temperature is: "); 
  Serial.println(temp); 

  delay(1000); 

}
