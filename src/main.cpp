#include <WiFi.h>

void setup() {
  Serial.begin(115200);
  delay(1000);  // Wait for Serial to be ready

  // Ensure WiFi hardware is initialized
  WiFi.mode(WIFI_MODE_STA);
  delay(100);  // Small delay for mode to apply

  String mac = WiFi.macAddress();


  Serial.println("ESP32 MAC AddressZ:");
  Serial.println(mac);  // Prints MAC like 24:6F:28:A3:BC:10
}

void loop() {
  Serial.println("Hello, ESP32!");
  delay(1000);  // Wait for 1 second before printing again
}
