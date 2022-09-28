
int LEDR = 3;
int LEDG = 1;
int LEDB = 2;


void setup()
{
  pinMode(LEDR, OUTPUT);
  
}

void loop()
{
  int intens = analogRead(A3);
  
  analogWrite(LEDR, intens);
  delay(1);
  
}