#include <Wire.h>

#include <LiquidCrystal_I2C.h>


 
#include "DHT.h"
 
#define DHT1PIN A0     // what pin sensors connected to
#define DHT2PIN A1
#define DHT3PIN A2
#define DHT4PIN A3
#define DHT5PIN A4
#define DHT6PIN A5
#define DHT7PIN A6
#define DHT8PIN A7
 
// Uncomment whatever type you're using!
#define DHT1TYPE DHT11   // DHT 11 
#define DHT2TYPE DHT11   // DHT 11 
#define DHT3TYPE DHT11   // DHT 11 
#define DHT4TYPE DHT11   // DHT 11 
#define DHT5TYPE DHT11   // DHT 11 
#define DHT6TYPE DHT11   // DHT 11 
#define DHT7TYPE DHT11   // DHT 11 
#define DHT8TYPE DHT11   // DHT 11 
 
LiquidCrystal_I2C lcd(0x27,20,4); 
 
DHT dht1(DHT1PIN, DHT1TYPE);
DHT dht2(DHT2PIN, DHT2TYPE);
DHT dht3(DHT3PIN, DHT3TYPE);
DHT dht4(DHT4PIN, DHT4TYPE);
DHT dht5(DHT5PIN, DHT5TYPE);
DHT dht6(DHT6PIN, DHT6TYPE);
DHT dht7(DHT7PIN, DHT7TYPE);
DHT dht8(DHT8PIN, DHT8TYPE);
 
void setup() {
   lcd.init();  
  lcd.backlight();
  
  Serial.begin(9600); 
  Serial.println("BOC DR Temperature");
  lcd.setCursor(1,0);
  lcd.print("DR Temperature");
    lcd.setCursor(1,1);
  lcd.print("By Rumesh");
 delay(3000);
lcd.init();

  
  dht1.begin();
  dht2.begin();
  dht3.begin();
  dht4.begin();
  dht5.begin();
  dht6.begin();
  dht7.begin();
  dht8.begin();
}
 
void loop() {

Serial.println("BOC DR Humidity & Temperature");
  float h1 = dht1.readHumidity();
  float t1 = dht1.readTemperature();
  float h2 = dht2.readHumidity();
  float t2 = dht2.readTemperature();
  
  float h3 = dht3.readHumidity();
  float t3 = dht3.readTemperature();
  float h4 = dht4.readHumidity();
  float t4 = dht4.readTemperature();
  
  float h5 = dht5.readHumidity();
  float t5 = dht5.readTemperature();
  float h6 = dht6.readHumidity();
  float t6 = dht6.readTemperature();
  
  float h7 = dht7.readHumidity();
  float t7 = dht7.readTemperature();
  float h8 = dht8.readHumidity();
  float t8 = dht8.readTemperature();
 
  if (isnan(t1) || isnan(h1)) {
    Serial.println("Failed to read from Zone#1 Front");
  } else {
    Serial.print("Humidity Zone1 Front: "); 
    Serial.print(h1);
    Serial.print(" %\t");
    Serial.print("Temperature Zone1 Front: "); 
    Serial.print(t1);
    Serial.println(" *C");

    lcd.setCursor(0,0);
    lcd.print("Z1-Fron Hum:"); 
    lcd.print(h1);
    lcd.print("%\t");
    lcd.setCursor(8,1);
    lcd.print("Tem:"); 
    lcd.print(t1);
    lcd.println("*C");
    
    delay(5000);
  }
    if (isnan(t1) || isnan(h1)) {
    Serial.println("Failed to read from Zone#1 Back");
  } else {
    Serial.print("Humidity Zone1 Back: "); 
    Serial.print(h1);
    Serial.print(" %\t");
    Serial.print("Temperature Zone1 Back: "); 
    Serial.print(t1);
    Serial.println(" *C");

    lcd.setCursor(0,0);
    lcd.print("Z1-Back Hum:"); 
    lcd.print(h1);
    lcd.print("%\t");
    lcd.setCursor(8,1);
    lcd.print("Tem:"); 
    lcd.print(t1);
    lcd.println("*C");
    
      
    delay(5000);
  }
    if (isnan(t1) || isnan(h1)) {
    Serial.println("Failed to read from Zone#2 Front");
  } else {
    Serial.print("Humidity Zone2 Front: "); 
    Serial.print(h1);
    Serial.print(" %\t");
    Serial.print("Temperature Zone2 Front: "); 
    Serial.print(t1);
    Serial.println(" *C");
    lcd.setCursor(0,0);
    lcd.print("Z2-Fron Hum:"); 
    lcd.print(h1);
    lcd.print("%\t");
    lcd.setCursor(8,1);
    lcd.print("Tem:"); 
    lcd.print(t1);
    lcd.println("*C");
    delay(5000);
  }
    if (isnan(t1) || isnan(h1)) {
    Serial.println("Failed to read from Zone#2 Back");
  } else {
    Serial.print("Humidity Zone2 Back: "); 
    Serial.print(h1);
    Serial.print(" %\t");
    Serial.print("Temperature Zone2 Back: "); 
    Serial.print(t1);
    Serial.println(" *C");
        lcd.setCursor(0,0);
    lcd.print("Z2-Back Hum:"); 
    lcd.print(h1);
    lcd.print("%\t");
    lcd.setCursor(8,1);
    lcd.print("Tem:"); 
    lcd.print(t1);
    lcd.println("*C");
    delay(5000);
  }
    if (isnan(t1) || isnan(h1)) {
    Serial.println("Failed to read from Zone#3 Front");
  } else {
    Serial.print("Humidity Zone3 Front: "); 
    Serial.print(h1);
    Serial.print(" %\t");
    Serial.print("Temperature Zone3 Front: "); 
    Serial.print(t1);
    Serial.println(" *C");
        lcd.setCursor(0,0);
    lcd.print("Z3-Fron Hum:"); 
    lcd.print(h1);
    lcd.print("%\t");
    lcd.setCursor(8,1);
    lcd.print("Tem:"); 
    lcd.print(t1);
    lcd.println("*C");
    delay(5000);
  }
  if (isnan(t1) || isnan(h1)) {
    Serial.println("Failed to read from Zone#3 Back");
  } else {
    Serial.print("Humidity Zone3 Back: "); 
    Serial.print(h1);
    Serial.print(" %\t");
    Serial.print("Temperature Zone3 Back: "); 
    Serial.print(t1);
    Serial.println(" *C");
        lcd.setCursor(0,0);
    lcd.print("Z3-Back Hum:"); 
    lcd.print(h1);
    lcd.print("%\t");
    lcd.setCursor(8,1);
    lcd.print("Tem:"); 
    lcd.print(t1);
    lcd.println("*C");
    delay(5000);
  }
  if (isnan(t1) || isnan(h1)) {
    Serial.println("Failed to read from Zone#4 Front");
  } else {
    Serial.print("Humidity Zone4 Front: "); 
    Serial.print(h1);
    Serial.print(" %\t");
    Serial.print("Temperature Zone4 Front: "); 
    Serial.print(t1);
    Serial.println(" *C");
        lcd.setCursor(0,0);
    lcd.print("Z4-Fron Hum:"); 
    lcd.print(h1);
    lcd.print("%\t");
    lcd.setCursor(8,1);
    lcd.print("Tem:"); 
    lcd.print(t1);
    lcd.println("*C");
    delay(5000);
  }
    if (isnan(t1) || isnan(h1)) {
    Serial.println("Failed to read from Zone#4 Back");
  } else {
    Serial.print("Humidity Zone4 Back: "); 
    Serial.print(h1);
    Serial.print(" %\t");
    Serial.print("Temperature Zone4 Back: "); 
    Serial.print(t1);
    Serial.println(" *C");
        lcd.setCursor(0,0);
    lcd.print("Z4-Back Hum:"); 
    lcd.print(h1);
    lcd.print("%\t");
    lcd.setCursor(8,1);
    lcd.print("Tem:"); 
    lcd.print(t1);
    lcd.println("*C");
    delay(5000);
  }
    
    if (isnan(t1) || isnan(h1)) {
    Serial.println("Failed to read from Zone#5 Com_Rack");
  } else {
    Serial.print("Humidity Zone5 Com_Rack: "); 
    Serial.print(h1);
    Serial.print(" %\t");
    Serial.print("Temperature Zone5 Com_Rack: "); 
    Serial.print(t1);
    Serial.println(" *C");
    lcd.setCursor(0,0);
    lcd.print("Z5-Com Hum:"); 
    lcd.print(h1);
    lcd.print("%\t");
    lcd.setCursor(8,1);
    lcd.print("Tem:"); 
    lcd.print(t1);
    lcd.println("*C");
  delay(5000);
  }
Serial.println();
}
