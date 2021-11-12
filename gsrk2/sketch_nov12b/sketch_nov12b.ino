int outputpin=0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  int rawvoltage=analogRead(outputpin);
  float millivolts=(rawvoltage/1024.0)*5000;
  float celsius=millivolts/10;
  Serial.println(celsius);
  Serial.println("degree celsuis,");
  Serial.println((celsius*9)/5+32);
  Serial.println("degree fahrenheit");
  delay(1000);

}
