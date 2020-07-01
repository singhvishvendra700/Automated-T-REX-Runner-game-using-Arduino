#include<Servo.h> 

Servo servo;

int threshold = 275; //try using different values of threshold by hit and trial method

int pressed_angle = 50; // try using different values of pressed_angle
int unpressed_angle = 90;
int servo_pin = 11;

void setup() {

 Serial.begin(9600);
 servo.attach(servo_pin);
 servo.write(unpressed_angle);

}

void loop() {

int value = analogRead(A0);

Serial.println(value);
delay(40);
 
if ( value < threshold )
{
servo.write(pressed_angle);
delay(90);
}
servo.write(unpressed_angle);
 
}
