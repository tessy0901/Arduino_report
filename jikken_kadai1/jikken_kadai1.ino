int echo=4; // センサからの入力（4番）
int trig=5; // センサへの出力（5番）
int buzzer=12; // 12番にブザーを接続
int time = 0; // 往復時間
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(echo, INPUT);
  pinMode(trig, OUTPUT);
  pinMode(buzzer,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH); // 超音波を出す
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  time = pulseIn(echo, HIGH); // 往復時間計測
  //Serial.print(double(time)/60); // 時間を表示
 // Serial.println(" cm");
 if(double(time)/60<=10){
    
  digitalWrite(buzzer,HIGH);
  delay(1);
  digitalWrite(buzzer,LOW);
  delay(1);
 }

}
