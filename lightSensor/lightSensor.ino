// Configuration variables
const int sensorPin = A0;

// Setup variables and serial communication
void setup() {
  
  Serial.begin(9600);
  pinMode(sensorPin, INPUT);

}

// Main loop
void loop() {

  Serial.println(analogRead(sensorPin));

}
