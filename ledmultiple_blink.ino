int led1=12;
int led2=11;
int led3=10;
int led4=8;
int led5=7;
int led6=5;
int led7=4;

void setup()
{
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
  pinMode(led6,OUTPUT);
  pinMode(led7,OUTPUT);
}

void loop()
{
  digitalWrite(led1,HIGH);
  delay(50);
  digitalWrite(led1,LOW);
  delay(50);
  digitalWrite(led2,HIGH);
  delay(50);
  digitalWrite(led2,LOW);
  delay(50);
  digitalWrite(led3,HIGH);
  delay(50);
  digitalWrite(led3,LOW);
  delay(50);
  digitalWrite(led4,HIGH);
  delay(50);
  digitalWrite(led4,LOW);
  delay(50);
  digitalWrite(led5,HIGH);
  delay(50);
  digitalWrite(led5,LOW);
  delay(50);
  digitalWrite(led6,HIGH);
  delay(50);
  digitalWrite(led6,LOW);
  delay(50);
  digitalWrite(led7,HIGH);
  delay(50);
  digitalWrite(led7,LOW);
  delay(50);
}
