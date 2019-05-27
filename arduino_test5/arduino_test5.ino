void setup() {
  // put your setup code here, to run once:
  pinMode(7, INPUT);
  
  pinMode(9,OUTPUT);  //車赤
  pinMode(10,OUTPUT); //車黄
  pinMode(11,OUTPUT); //車緑
  pinMode(12,OUTPUT); //人赤
  pinMode(13,OUTPUT); //人緑
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,HIGH);
  digitalWrite(12,HIGH);
  digitalWrite(13,LOW);
  
  if(digitalRead(7) == HIGH){
    digitalWrite(11,LOW);
    digitalWrite(10,HIGH);
    delay(3000);
    
    digitalWrite(10,LOW);
    digitalWrite(9,HIGH);
    digitalWrite(12,LOW);
    digitalWrite(13,HIGH);
    delay(5000);
    for(int i = 0;i<6;i++){
      digitalWrite(13,i%2);
      delay(500);
    }
  }
  else{
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(13,LOW);
  }
}
