#include <GyverBME280.h>
GyverBME280 bme;

void setup() {
  
  Serial.begin(9600);
  
  if (!bme.begin(0x76)) Serial.println("Error!");
  
}
void loop() {
  
  Serial.print("Temperature: ");
  Serial.print(bme.readTemperature());
  Serial.println(" °C");

  Serial.print("Humidity: ");
  Serial.print(bme.readHumidity());
  Serial.println(" %");

  float pressure = bme.readPressure();
  Serial.print("Pressure: ");
  Serial.print(pressureToMmHg(pressure));
  Serial.println(" mmHg");

  Serial.println();
  
  delay(1000);
}