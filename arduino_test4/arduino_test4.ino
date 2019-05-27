void setup() {
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
  int pw = analogRead(0);
  analogWrite(9, pw/4);
  delay(100);
}
