int a = 1,b=2,c=3,d=4,e=5,f=6;

void setup() {
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
}

void loop() {
  digitalWrite(a,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  
  delay(3.33);

  digitalWrite(a,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  delay(3.33);

  digitalWrite(c,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  delay(3.33);

  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
   digitalWrite(1,LOW);
  digitalWrite(4,LOW);
   digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  delay(3.33);

  digitalWrite(2,HIGH);
  digitalWrite(5,HIGH);
   digitalWrite(1,LOW);
  digitalWrite(3,LOW);
   digitalWrite(4,LOW);
  digitalWrite(6,LOW);
  delay(3.33);

  digitalWrite(5,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(1,LOW);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(6,LOW);
  delay(3.33);

  digitalWrite(1,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  delay(3.33);
  
  

}
