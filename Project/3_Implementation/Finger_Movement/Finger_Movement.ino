#include <Servo.h>
//Declaring Variables for servo motors, potentiometers and the value from the potentiometer
Servo index_finger;  
int pot = 0;  
int a;    
Servo middle_finger;  
int pot1 = 1;  
int b;    
Servo ring_finger;  
int pot2 = 2;  
int c;    
Servo little_finger;
int pot3= 3;  
int d;    
Servo thumb;
int pot4 = 4;  
int f;
void setup()
{
  index_finger.attach(3);  
  middle_finger.attach(5);  
  ring_finger.attach(6);  
  little_finger.attach(9);  
  thumb.attach(10);  
}

void loop()
{
  //Mapping the servo motor motion according to the voltage value from potentiometer and achieve accurate angle movement
  a = analogRead(pot1);      
  a = map(a, 0, 1023, 0, 185 );
  index_finger.write(a);          
  b = analogRead(pot2);      
  b = map(b, 0, 1023, 0, 185 );
  middle_finger.write(b);          
  c = analogRead(pot3);      
  c = map(c, 0, 1023, 0, 185 );
  ring_finger.write(c);        
  d = analogRead(pot4);      
  d = map(d, 0, 1023, 0, 185 );
  little_finger.write(d);          
  f = analogRead(pot5);  
  f = map(f, 0, 1023, 0, 185 );
  thumb.write(f);          

}
