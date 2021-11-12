int LDR=0;
int LDRValue=0;
int light_sensivity=200;
void setup() {
  // put your setup code here, to run once:
    Serial.begin(9600);
  pinMode(12,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int LDRValue=analogRead(LDR);
  Serial.println(LDRValue);
  delay(1000);
  if(LDRValue<light_sensivity){
  digitalWrite(12,HIGH);
}
else{
  digitalWrite(12,LOW);
}
delay(2000);

}

