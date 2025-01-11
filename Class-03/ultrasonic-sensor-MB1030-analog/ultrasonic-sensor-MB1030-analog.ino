#define AN_PIN A0 // Pin connected to AN output
float voltage, distance;

void setup() {
  Serial.begin(9600); // Start Serial Monitor
}

void loop() {
  voltage = analogRead(AN_PIN) * (5.0 / 1023.0); // Convert to voltage
  distance = voltage / (5.0 / 512.0);           // Convert voltage to distance (in inches)
  
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" inches");

  delay(100); // Wait 100ms for stability
}
