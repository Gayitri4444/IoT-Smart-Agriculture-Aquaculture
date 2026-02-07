#define SOIL_MOISTURE_PIN 34
#define RELAY_PIN 26
#define THRESHOLD 30

void setup() {
  Serial.begin(9600);
  pinMode(SOIL_MOISTURE_PIN, INPUT);
  pinMode(RELAY_PIN, OUTPUT);
  digitalWrite(RELAY_PIN, LOW);
}

void loop() {
  int sensorValue = analogRead(SOIL_MOISTURE_PIN);
  int moisture = map(sensorValue, 4095, 0, 0, 100);

  if (moisture < THRESHOLD) {
    digitalWrite(RELAY_PIN, HIGH);
    Serial.println("Alert: Irrigation ON");
  } else {
    digitalWrite(RELAY_PIN, LOW);
    Serial.println("Irrigation OFF");
  }

  delay(5000);
}
