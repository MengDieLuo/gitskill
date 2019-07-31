/*
Blink
turns on an LED on for one second,then off for one seccond,repeatedly

This example code is in the public domain

*/

int led = 13;
void setip()
{
pinMode(led,OUTPUT)
}


void loop()
{
	digitalWrite(led,HIGH);
	delay(1000);
	digitalWrite(led,LOW)
	delay(3000);

}


