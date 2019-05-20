#include <Servo.h>
Servo servo1;
int input = 0; // 可変抵抗器の入力をA0に接続
int val;
void setup() {
  servo1.attach(7); // サーボを7番に接続
}
void loop() {
  val = analogRead(input);
  val = map(val, 0, 1023, 0, 180);
  servo1.write(val);
  delay(15);
}
