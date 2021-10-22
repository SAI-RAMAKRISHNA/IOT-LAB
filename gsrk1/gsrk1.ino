const int buttonpin =3;
const int ledpin = 13;

int buttonstate = 0;
void setup() {
  pinMode(ledpin,OUTPUT);
  pinMode(buttonpin,INPUT);
  // put your setup code here, to run once:

}

void loop() {
  buttonstate=digitalRead(buttonpin);

  if(buttonstate==HIGH){

    digitalWrite(ledpin,HIGH);
  }else{
    digitalWrite(ledpin,LOW);
  }
}

  // put your main code here, to run repeatedly:

