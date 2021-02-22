#include <OneWire.h>

#include <DallasTemperature.h>

void setup() {
  Serial.begin(9600);
DS1307.begin();
sensors.begin();

pinMode(pinoSS, OUTPUT); // Declara pinoSS como saída

Wire.begin(); //Inicializacao da Comunicacao I2C
lcd.init();                      //Inicializacao do LCD
lcd.backlight();

lcd.setCursor(3,0);
lcd.print("Temp System");
lcd.setCursor(3,1);
lcd.print("Datalogger");
delay(2000);

// Localiza e mostra enderecos dos sensores
Serial.println("Localizando sensores DS18B20...");
Serial.print("Sensor Localization successfully!");
Serial.print(sensors.getDeviceCount(), DEC);
Serial.println(" Sensor");

if(SD.begin()) 
{
// Inicializa o SD Card
Serial.println("SD Card pronto para uso."); // Imprime na tela
}

else 

{
Serial.println("Falha na inicialização do SD Card.");
return;
}
  
  DS1307.getDate(DataTime);
    
  lcd.clear();
  
  sprintf(times, "%02d:%02d", DataTime[4], DataTime[5]);

  lcd.setCursor(5,0);
  lcd.print(times);
  lcd.setCursor(0,1);
  lcd.print("1-M   2-H  3-O/P");

}

void loop() {
  float getTempF(const uint8_t*);
  bool requestTemperaturesByIndex(uint8_t);
  

}
