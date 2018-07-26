#include <LM35.h>

void setup {
  Serial.begin(9600);
  Serial.println("Starting...");
}

void loop() {
  LM35 sensor1(A0); // Sensor connected to pin A0
  double temp = sensor1.read(); //Returns temperature based on a single reading
  Serial.print("Temperature based on a single reading ");
  Serial.println(temp);

  double temp1 = sensor1.read(5); //Returns temperature based on 5 readings (more accurate but slower)
  Serial.print("Temperature based on 5 readings (more accurate but slower) ");
  Serial.println(temp1);

  delay(5000); // 5 secs
}
