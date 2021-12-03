#define echoPin 7 // Echo Pin
#define trigPin 8 // Trigger Pin
#define LEDPin 13 // Onboard LED
int maximumRange = 200; 

int minimumRange = 0; 
long duration, distance; // Duration used to calculate distance
void setup() {
 Serial.begin (9600);
 pinMode(trigPin, OUTPUT);
 pinMode(echoPin, INPUT);
 pinMode(LEDPin, OUTPUT); // Use LED indicator (if required)
}
void loop() {

 digitalWrite(trigPin, LOW);
 delayMicroseconds(2);
 digitalWrite(trigPin, HIGH);
 delayMicroseconds(10);
 digitalWrite(trigPin, LOW);
 duration = pulseIn(echoPin, HIGH);
//Calculate the distance (in cm) based on the speed of sound.
 distance = duration/58.2;
 if (distance >= maximumRange || distance <= minimumRange){

 Serial.println("-1");
 digitalWrite(LEDPin, HIGH);
 }
else {

 Serial.println(distance);
 digitalWrite(LEDPin, LOW);
 }

 delay(50);
}
