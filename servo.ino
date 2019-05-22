#include <Servo.h>


Servo myservo;
int pos =0;
void setup() {
  myservo.attach(13);
  // put your setup code here, to run once:

}

void loop() {
  for(pos=0;pos<=180;pos+=1){
    myservo.write(pos);
    if(pos==90)
    delay(200);
    delay(15);
  }
  // put your main code here, to run repeatedly:
   for(pos=180;pos>=0;pos-=1){
    myservo.write(pos);
    if(pos==90)
    delay(200);
    delay(15);
  

}
}
