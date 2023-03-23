/*
 Dimming 4 leds
 */

int ledR = 3;    // LED connected to digital pin 3
int ledG = 5;
int ledB = 6;
int ledY = 9;

int dimTime = 20;

void setup()  { 
  // nothing happens in setup 
} 
void loop() {
  dimLed(ledR);
  dimLed(ledG);
  dimLed(ledB);
  dimLed(ledY);
}
void dimLed(int led)  { 
  // fade in from min to max in increments of 5 points:
  for(int fadeValue = 0 ; fadeValue <= 255; fadeValue +=5) { 
    // sets the value (range from 0 to 255):
    analogWrite(ledR, fadeValue);   
    // wait for 30 milliseconds to see the dimming effect    
    delay(dimTime);                            
  } 

  // fade out from max to min in increments of 5 points:
  for(int fadeValue = 255; fadeValue >= 0; fadeValue -=5) {
    analogWrite(ledR,fadeValue);
    delay(dimTime);
  }

  for(int fadeValue = 0; fadeValue <=255; fadeValue +=5) {
    analogWrite(ledG, fadeValue);
    delay(dimTime);
  }
  for(int fadeValue = 255; fadeValue >= 0; fadeValue -=5) {
    analogWrite(ledG,fadeValue);
    delay(dimTime);
  }

  for(int fadeValue = 0; fadeValue <=255; fadeValue +=5) {
    analogWrite(ledB, fadeValue);
    delay(dimTime);
  }
  for(int fadeValue = 255; fadeValue >= 0; fadeValue -=5) {
    analogWrite(ledB,fadeValue);
    delay(dimTime);
  }

  for(int fadeValue = 0; fadeValue <=255; fadeValue +=5) {
    analogWrite(ledY, fadeValue);
    delay(dimTime);
  }
  for(int fadeValue = 255; fadeValue >= 0; fadeValue -=5) {
    analogWrite(ledY,fadeValue);
    delay(dimTime);
  }
  
  }

  
