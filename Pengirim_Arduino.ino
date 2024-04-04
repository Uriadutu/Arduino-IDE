const int potPin = A0; // Pin potensiometer terhubung ke pin analog A0

void setup() {
  Serial.begin(9600); // Mulai komunikasi serial dengan kecepatan 9600 bps
}

void loop() {
  int sensorValue = analogRead(potPin); // Baca nilai potensiometer
  Serial.println(sensorValue); // Kirim nilai potensiometer melalui Serial
  delay(100); // Tunggu 100 milidetik
}
