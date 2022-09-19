int dirPin = 52;

int stepPin = 53;



void setup(){

  pinMode(dirPin,OUTPUT);

  pinMode(stepPin,OUTPUT);

  digitalWrite(dirPin,HIGH);

}




void loop(){

  digitalWrite(stepPin,HIGH);

  delayMicroseconds(500);

  digitalWrite(stepPin,LOW);

  delay(1);

}
