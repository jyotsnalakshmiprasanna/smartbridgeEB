void setup() {
  // put your setup code here, to run once:
  pinMode(5,OUTPUT);
  pinMode(4,INPUT);

}

void loop() {
   int a=digitalRead(4);
  Serial.println(a);
  // put your main code here, to run repeatedly:
  if(a==HIGH)
  {
    Serial.println("PERSON DETECTED");
    digitalWrite(5,HIGH);
    delay(100);
  }
  else
  {
    Serial.println("PERSON NOT DETECTED");
  digitalWrite(5,LOW);
  delay(100);
  }
 
}
