const int trigPin=4;
const int echoPin=5;
int led=19,26;
long duration;
int distance;
void setup() {
  // put your setup code here, to run once:
pinMode(2,OUTPUT);
pinMode(trigPin,OUTPUT);
pinMode(echoPin,INPUT);
pinMode(led,OUTPUT);
Serial.begin(115200);

}

void loop() {
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(1000);
  digitalWrite(trigPin,LOW);
  
digitalWrite(led,HIGH);
  delayMicroseconds(100);
  digitalWrite(led,LOW);
  delayMicroseconds(100);
  duration= pulseIn(echoPin,HIGH);
  distance=duration*0.034/2;
  Serial.println("Distance:");
  Serial.println(distance);
  if(distance<7)
 {
  Serial.println("LED ON");
  digitalWrite(led,HIGH);
 }
  else
  {
   Serial.println("LED OFF");
  }
    digitalWrite(led,LOW);
  }
