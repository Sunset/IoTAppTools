#include <dht.h>

#define dht_apin A0 
 
dht DHT;
 
void setup(){
  Serial.begin(9600);
  delay(500);
  Serial.println("DHT11 Humidity & temperature Sensor\n\n");
  delay(1000);
}
 
void loop(){
    DHT.read11(dht_apin);
    
    Serial.print("Current humidity = ");
    Serial.print(DHT.humidity);
    Serial.print("%  ");
    Serial.print("temperature = ");
    Serial.print(DHT.temperature); 
    Serial.println("C  ");
    Serial.print(" and ");
    Serial.print(DHT.temperature * (9/5) + 32);
    Serial.println("F ");
    delay(5000);
}
