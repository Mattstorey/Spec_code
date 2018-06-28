


void setup() {
  Serial.begin(9600);
}

void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  // print to serial output
  Serial.println(sensorValue);
  // Delay output by 100 mS
  delay(100);        
}
