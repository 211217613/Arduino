/*
 
 http://arduino.cc/en/Tutorial/AnalogInput
 
 */

int sensorPin = A0;    // select the input pin for the potentiometer
int ledPin = 13;      // select the pin for the LED
int sensorValue = 0;  // variable to store the value coming from the sensor

void setup() {
  // declare the ledPin as an OUTPUT:
  pinMode(ledPin, OUTPUT);  
  digitalWrite(ledPin, LOW);
  pinMode(sensorPin, INPUT);
  Serial.begin(9600);
  if(Serial){
    Serial.println("Serial Port Ready!");
  }
}

void loop() {
  // read the value from the sensor:
  sensorValue = analogRead(sensorPin); Serial.println(sensorValue);
  delay(2000);
  if(sensorValue > 300 ){
    digitalWrite(ledPin, HIGH);
  }
  else
    digitalWrite(ledPin, LOW);
}


