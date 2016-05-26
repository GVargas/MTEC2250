int sensorRead = 1;

void setup() {
  pinMode(2, INPUT);
  pinMode(9, OUTPUT);
}

void loop() {
  sensorRead = digitalRead(2);

  if (sensorRead > 0) {
    digitalWrite(9, LOW);
  }
  else {
    digitalWrite(9, HIGH);
  }
}
