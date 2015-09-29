/*
 * We add some comments
 * Title: Blink
 * Use: Turns the LED on and off at 1 second intervals
 * 
 */

 // another way to do only single line comments
 // we can use them to describe our varibles
 // in this case our variable is aport on the 
 // Arduino. If is an integer (int) since we are talking
 // about the 14 pin ports around the edge.

int led = 13;

 //the setup routine runs once, when the reset buton is pushed
 void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT); //we will initialize the pin as an output
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led, HIGH);  //turn the led on (High is the voltage level)
  delay(1000);  //wait for 1 second 
  digitalWrite(led, LOW); //turn the led off
  delay(1000);  

}
