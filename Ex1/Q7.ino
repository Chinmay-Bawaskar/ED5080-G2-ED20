/*
 7. Print a text in serial monitor 
*/
void setup()
{
  Serial.begin(9600);
}

int number = 0;
int print=1;
void loop()
{
  if(print==1){
  Serial.print("The number is ");
  Serial.println(number);   
  }
  print=0;
  
}
