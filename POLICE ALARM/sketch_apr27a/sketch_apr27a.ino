void setup() {
  pinMode(13,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(4,OUTPUT);

}

void loop() {
  digitalWrite(13,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(4,HIGH);
  delay(80);
  digitalWrite(13,LOW);
  digitalWrite(8,LOW);
  digitalWrite(7,LOW);
  digitalWrite(4,LOW);
  delay(80);

}
