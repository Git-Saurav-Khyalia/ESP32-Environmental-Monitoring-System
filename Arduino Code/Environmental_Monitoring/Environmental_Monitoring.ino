

#include "DHT.h"
#define DHTPIN 4       
#define DHTTYPE DHT22
#define GAS_PIN 34        
#define STATUS_LED 2      


DHT dht(DHTPIN, DHTTYPE);


void setup() {
  Serial.begin(115200);   
  pinMode(STATUS_LED, OUTPUT);
  dht.begin();
 
  Serial.println("--- System Online: Environmental Monitoring ---");
}


void loop() {
  
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  int gasValue = analogRead(GAS_PIN); 
  if (isnan(h) || isnan(t)) {
    Serial.println("Error: Could not read from DHT sensor!");
    delay(2000);
    return;
  }

  Serial.print("Status: [");
 
  if (gasValue > 1500 || t > 35.0) {
    digitalWrite(STATUS_LED, HIGH);
    Serial.print(" DANGER ");
  } else {
    digitalWrite(STATUS_LED, LOW);
    Serial.print(" SAFE ");
  }
 
  Serial.print("] | Temp: ");
  Serial.print(t);
  Serial.print("°C | Humidity: ");
  Serial.print(h);
  Serial.print("% | Gas Level: ");
  Serial.println(gasValue);
  delay(2000);
}
