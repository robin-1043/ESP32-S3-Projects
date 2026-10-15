
const int potPin = 4;
const int ledPin = 5;

void setup() {
  Serial.begin(115200);

  analogReadResolution(12);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int potValue = analogRead(potPin);

  int brightness = map(potValue, 0, 4095, 255, 0);

  analogWrite(ledPin, brightness);

  Serial.print("Potentiometer: ");
  Serial.print(potValue);
  Serial.print(" | LED Brightness: ");
  Serial.println(brightness);

  delay(100);
}
