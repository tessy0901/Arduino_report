void setup() {
  // put your setup code here, to run once:
   pinMode(7, INPUT);
  //デジタル7番ピンを入力として利用する
  pinMode(13,OUTPUT); //デジタル13番ピンを出力として利用する
  

}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(7) == HIGH) {
    //スイッチの状態を調べる
    digitalWrite(13,HIGH);
    //スイッチが押されていればLEDを点灯
  }else{
     digitalWrite(13,LOW);
    //スイッチが押されていなければLEDを消灯
  }
}
