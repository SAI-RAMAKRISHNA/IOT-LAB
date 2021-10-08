int pin_red=13;
int pin_green=2;
int pin_yellow=5;
void setup() {
  // put your setup code here, to run once:
 pinMode(pin_red,OUTPUT);
 pinMode(pin_green,OUTPUT);
 pinMode(pin_yellow,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(pin_red, HIGH);
delay(1000);
digitalWrite(pin_red, LOW);
delay(1000);
digitalWrite(pin_yellow, HIGH);
delay(1000);
digitalWrite(pin_yellow, LOW);
delay(1000);
digitalWrite(pin_green, HIGH);
delay(1000);
digitalWrite(pin_green, LOW);
delay(1000);
}
