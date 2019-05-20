int echo=4; // センサからの入力（4番）
int trig=5; // センサへの出力（5番）
int time = 0; // 往復時間
void setup(){
Serial.begin(9600);
pinMode(echo, INPUT);
pinMode(trig, OUTPUT);
}

void loop(){
digitalWrite(trig, LOW);
delayMicroseconds(2);
digitalWrite(trig, HIGH); // 超音波を出す
delayMicroseconds(10);
digitalWrite(trig, LOW);
time = pulseIn(echo, HIGH); // 往復時間計測
Serial.print(double(time)/60); // 時間を表示
Serial.println(" cm");
delay(100);
}
