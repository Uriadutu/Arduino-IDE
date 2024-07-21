void setup() {
  Serial.begin(9600); // Mulai komunikasi serial dengan kecepatan 9600 bps
  Serial.println("Hello");
}




void loop() {
  if (Serial.available() > 0) { // Jika ada data yang tersedia di Serial
    int sensorValue = Serial.parseInt(); // Baca nilai yang dikirim melalui Serial
    Serial.print("Nilai Yang Dikirimkan: "); // Tampilkan pesan
    Serial.println(sensorValue); // Tampilkan nilai potensiometer
  }
}


