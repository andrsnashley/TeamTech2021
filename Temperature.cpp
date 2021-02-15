//
// Temperature.cpp
//
// Team Tech 2020-21
// Ashley Anderson, Brittney Honeycutt, Kaily Metz, Alexandra Rostkowycz

#include <iostream>
#include <string>
#include <cmath>
#include <utility>
#include <vector>
// #include <DallasTemperature.h> //Library with all function of DS18B20 Sensor
// #include <DS1307.h>
// #include <LiquidCrystal_I2C.h> //Biblioteca I2C do LCD 16x2
// #include <Wire.h> //Biblioteca de Comunicacao I2C 
// #include <OneWire.h> //OneWire Library for DS18B20 Sensor
// #include <SD.h>
// #include <SPI.h>
using namespace std;

int MAX_TEMP = 100;

class Temperature {

private:
    
    double temp;
    pair<double, double> tempErrRange;

public:

    Temperature();

    // Set Up DS18B20 Sensor and Arduino
    void setUp();

    // Collect Temperature Data from Sensor
    void getTemp();

    // Check if Temperature is too high
    bool checkTemp();

    // Sends alert to user when Temperature is too high
    void sendAlert();
    
};

Temperature::Temperature(/* args */) {

}

void Temperature::setUp() {





}

void Temperature::getTemp() {




}

bool Temperature::checkTemp() {



}

void Temperature::sendAlert() {


    
}
