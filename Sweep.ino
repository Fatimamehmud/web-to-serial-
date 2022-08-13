/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 https://www.arduino.cc/en/Tutorial/LibraryExamples/Sweep
*/

#include <Servo.h>

Servo myservo;  
int pos = 0;    

void setup() {
 Serial.begin(9600);
  myservo.attach(9); 
}


void loop() {
  
    String data=Serial.readString(); 
    if (data.indexOf("يمين") > -1){ 
     
      myservo.write(180);
     }
    else if (data.indexOf("يسار") > -1){ 
      myservo.write(0); 
      }
}
