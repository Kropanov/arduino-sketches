#define A_PIN A0

void setup() {
  // put your setup code here, to run once:
  pinMode(A_PIN, INPUT);

  Serial.begin(115200);
  Serial.setTimeout(1);
}

void loop() {
  // put your main code here, to run repeatedly:
  int rawValue = analogRead(A_PIN);

  float waterLevelPercent = (rawValue / 1023.0) * 100.0; // Convert to percentage
  Serial.print("Water Level: ");
  Serial.print(waterLevelPercent);
  Serial.println("%");

  delay(500);
}
