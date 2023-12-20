// Configuration variables
const int sensorPin = A0;
const int ledPin = 6;

// Setup variables and serial communication
void setup() {
  
  Serial.begin(9600);
  pinMode(sensorPin, INPUT);
  pinMode(ledPin, OUTPUT);

}

// Main loop
void loop() {

  int sensorValue = analogRead(sensorPin);
  Serial.println(analogRead(sensorPin));

  analogWrite(ledPin, map(sensorValue, 300, 1000, 0, 100));
  // if (sensorValue < 500) {

  //     digitalWrite(ledPin, HIGH);

  // } else {

  //     digitalWrite(ledPin, LOW);

  // }

}
