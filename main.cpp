#include <iostream>
#include <Servo.h>
using namespace std;

Servo myservo;

int pos = 0;

void setup() {
  myservo.attach(9);
}

void function(){
  cout<<"mew\n";
}

int main() 
{
  cout << "Hello World!\n";
  function();
  return 0;
  
  for (pos = 0; pos <= 180; pos += 1) {
    // in steps of 1 degree
    myservo.write(pos);
    delay(15);
  }
  for (pos = 180; pos >= 0; pos -= 1) {
    myservo.write(pos);
    delay(15);
  }
}