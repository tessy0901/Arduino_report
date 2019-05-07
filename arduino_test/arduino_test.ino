void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT); //デジタル13番ピンを出力として利用する
  

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH);
  //デジタル13番ピンにHIGH（5V）を出力する
}
