int Rsens;
int Lsens;
int Lback=3;
int Lforw=6;
int Rback=10;
int Rforw=9;
void setup() {
  
  pinMode(Lback,OUTPUT);
  pinMode(Lforw,OUTPUT);
  pinMode(Rforw,OUTPUT);
  pinMode(Rback,OUTPUT);
  pinMode(7,INPUT);
  pinMode(8,INPUT);

}

void loop() {
  Rsens=digitalRead(7);
  Lsens=digitalRead(8);
  if(Rsens==HIGH && Lsens==HIGH)
  {
    digitalWrite(Lback,LOW);
    digitalWrite(Lforw,LOW);
    digitalWrite(Rforw,LOW);
    digitalWrite(Rback,LOW);
  }
  else if(Rsens==HIGH && Lsens==LOW)
  {
    digitalWrite(Lback,LOW);
    digitalWrite(Lforw,HIGH);
    digitalWrite(Rforw,LOW);
    digitalWrite(Rback,HIGH);
  }
  else if(Rsens==LOW && Lsens==HIGH)
  {
    digitalWrite(Lback,HIGH);
    digitalWrite(Lforw,LOW);
    digitalWrite(Rforw,HIGH);
    digitalWrite(Rback,LOW);
  }
  else
  {
    digitalWrite(Lback,LOW);
    digitalWrite(Lforw,HIGH);
    digitalWrite(Rforw,HIGH);
    digitalWrite(Rback,LOW);
  
  }
  

}
