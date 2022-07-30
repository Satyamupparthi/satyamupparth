int IRsensor = 2;
int LED = 13; 

void setup()
{
  pinMode (IRsensor, INPUT); 
  pinMode (LED, OUTPUT); 
}

void loop()
{
  int statusSensor = digitalRead (IRsensor); 
  
  if (statusSensor == 1)
  {
    digitalWrite(LED,LOW); 
  }

  else
  {
    digitalWrite(LED,HIGH);
  }
}
