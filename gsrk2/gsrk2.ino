const int analogInPin= A0;
const int analogOutputPin=11;
int sensorvalue=0;
int outputvalue=0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  sensorvalue=analogRead(analogInPin);
  outputvalue=map(sensorvalue,0,1023,0,255);
  analogWrite(analogOutputPin,outputvalue);
  Serial.print("Sersorvalue is");
  Serial.println(sensorvalue);
   Serial.print("outputvalue");
  Serial.println(outputvalue);
  delay(2000);

}
