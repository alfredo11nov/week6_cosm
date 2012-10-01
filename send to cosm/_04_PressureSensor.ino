/*
  Pressure Sensor LED control
  Control an LED brightness using a pressure sensor.
  
  
  This example code is in the public domain.
 */
 
// an LED motor attached to Pin11
// give it a name:
int LEDPin = 11;


// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(LEDPin, OUTPUT);  
  
}

// the loop routine runs over and over again forever:
void loop() {

  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  
  // print out the value you read:
  Serial.println(sensorValue);
  int brightness;
  
  brightness = map(sensorValue,0,1023,0,255);
   
  analogWrite(LEDPin, brightness);   // turn the LED on (HIGH is the voltage level)

  delay(10);               // wait for a while

}
