#include <Servo.h>
int echo=4; // センサからの入力（4番）
int trig=5; // センサへの出力（5番）
int time = 0; // 往復時間

Servo servo1;
  int input = 0; // 可変抵抗器の入力をA0に接続
  int val;
  double dis;
  void setup() {
  Serial.begin(9600);
  servo1.attach(7); // サーボを7番に接続
  
  pinMode(echo, INPUT);
  pinMode(trig, OUTPUT);
}
void loop() {
    
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH); // 超音波を出す
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  time = pulseIn(echo, HIGH); // 往復時間計測
  //if(fabs(double(time)/60.-dis)<40);  
  dis = double(time)/60.;
  if(time>=0){
    if(dis<=10){
      val=0;
    }else if(dis<=100){
      
      val = (dis-10)*2.;
    }else{
      val=180;
    }
    servo1.write(val);
    Serial.print(time);
    Serial.print(",");
    Serial.print(dis);
    Serial.print(",");
    Serial.println(val);
  }
  delay(30);
}
