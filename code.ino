#include <LiquidCrystal.h>
#include <Servo.h>
#define trig 9
#define echo 8
Servo servo;
float valuec,valuef;
int tmp = A0; 
int state; 
long duration;
int distance; // initialize the library with the numbers of the interface pins
LiquidCrystallcd(2, 3, 4, 5, 6, 7);
void setup() {
// set up the LCD's number of columns and rows
lcd.begin(16, 2);
Serial.begin(9600);
lcd.print("Wash your hands");   // Print a message to the LCD.
lcd.setCursor(0,1);
lcd.print("before you enter");
servo.attach(10);
pinMode(trig, OUTPUT); // Set the trigger pin as OUTPUT
pinMode(echo, INPUT); // Set the echo pin as INPUT
pinMode(tmp,INPUT);
pinMode(10, OUTPUT);
Serial.begin(9600); 
}
void loop() 
{
float mv,mvc,valuec;
digitalWrite(trig, LOW); 
delayMicroseconds(5);
digitalWrite(trig, HIGH); // Set the trigger pin HIGH to send the ultrasonic wave (pulse)
delayMicroseconds(10);
digitalWrite(trig, LOW); 
duration = pulseIn(echo, HIGH); // Calculate time taken (in microseconds) for the pulse emitted by the trigger pin to reach the echo pin.
distance = (duration/2) * (331.3/10000); // Calculate the distance from the sensor to the obstacle in cm, using the speed of sound in air(m/s) and the time taken (stored in duration variable)
delay(1000);
  if(distance>2 && distance<5)
{ // If you place your hands within 5 cm
lcd.clear();
lcd.setCursor(1,0);
lcd.print("Hands detected");
lcd.setCursor(0,1);
lcd.print("Wash hands-10s");
digitalWrite(11, HIGH);
delay(3000); // Wait for 1000 millisecond(s)
digitalWrite(11, LOW);
    state=1; // Assign state variable to 1
delay(1000); // Delay period of 1 second must be used to prevent clicking of the relay module
lcd.clear();
lcd.print("You are safe now");
delay(1000);
lcd.clear();
  }
valuec = analogRead(tmp);
  mv = (valuec*5000)/1024;
mvc = mv/10;
valuef=((mvc*9)/5)+32;  
Serial.print(mvc);
Serial.print(valuef);
  if((state==1)&&(valuef<=99))
{ // If you place your hands in front of the IR sensor after washing your hands
lcd.clear();
lcd.setCursor(1,0);
lcd.print("You may go in");
lcd.setCursor(1,1);
lcd.print("30 seconds left");
servo.write(90);
delay(20000); // The door will be opened for 10 seconds
servo.write(0);
lcd.clear();
lcd.print("Wash your hands");
lcd.setCursor(0,1);
lcd.print("before you enter");
delay(3000);
    state=0;
   } 
else if((state==1)&&(valuef>99))
{ // If you do not wash your hands before you enter
lcd.clear();
lcd.print("  Temperature");
lcd.setCursor(0,1);
lcd.print(" is High");
delay(5000);
lcd.clear();
lcd.print("You are not");
delay(1000);
lcd.setCursor(0,1);
lcd.print("Permitted in");
    state=0;
   } 
  else if(state==0)
  {
lcd.clear();
lcd.print("Wash your hands");
lcd.setCursor(0,1);
lcd.print("to grant access");
delay(3000);
  }
}
