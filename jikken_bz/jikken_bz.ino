int buzzer=12; // 12番にブザーを接続
void setup(){
pinMode(buzzer,OUTPUT);
}
void loop(){
digitalWrite(buzzer,HIGH);
delay(1);
digitalWrite(buzzer,LOW);
delay(1);
}
