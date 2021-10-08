int pin_red=2;
int pin_green=5;
int pin_yellow=13;
void setup() {
  // put your setup code here, to run once:
 pinMode(pin_red,OUTPUT);
 pinMode(pin_green,OUTPUT);
 pinMode(pin_yellow,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(pin_red, HIGH);
digitalWrite(pin_green, LOW);
digitalWrite(pin_yellow, LOW);
delay(1000);
digitalWrite(pin_green, HIGH);
digitalWrite(pin_red, LOW);
digitalWrite(pin_yellow, LOW);
delay(5000);
digitalWrite(pin_yellow, HIGH);
digitalWrite(pin_red, LOW);
digitalWrite(pin_green, LOW);
delay(10000);
}
