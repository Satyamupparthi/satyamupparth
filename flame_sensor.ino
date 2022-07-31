const int ledpin=13;//ledpin,flamepin and buzpin are not changed throughout the process
const int flamepin=A2;
const int buzpin=11;
const int threshold=200;//sets threshold value for flame sensor
int flamesensvalue=0;//initialize flamesensor reading



void setup() {
  Serial.begin(9600);
  pinMode(ledpin,OUTPUT);
  pinMode(flamepin,INPUT);
  pinMode(buzpin,OUTPUT);
  
}


void loop() {
 flamesensvalue=analogRead(flamepin);//analog data read from flame sensor
 if (flamesensvalue<=threshold) {//compares reading from flame sensor with the threshold value
  digitalWrite(ledpin,HIGH);
  tone(buzpin,100);
  delay(1000);
 }
else{
  digitalWrite(ledpin,LOW);
  noTone(buzpin);
}
}
