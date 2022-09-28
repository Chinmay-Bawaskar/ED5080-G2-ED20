

int sensorValue = 0;

void setup()
{
  pinMode(A2, INPUT);
  Serial.begin(9600);
}

void loop()
{
  // read the value from the sensor
  sensorValue = analogRead(A2);
  // turn the LED on
  Serial.println(sensorValue);
  // stop the program for the <sensorValue>
  // milliseconds
  delay(10); // Wait for sensorValue millisecond(s)
}