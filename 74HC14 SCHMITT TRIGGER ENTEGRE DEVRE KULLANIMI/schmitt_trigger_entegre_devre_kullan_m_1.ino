int pin=2;
int led=3;
void setup()
{
  Serial.begin(9600);
  pinMode(pin, INPUT);pinMode(led,OUTPUT);
}

void loop()
{
  if(!digitalRead(pin))
    digitalWrite(led,HIGH);
   else
   	digitalWrite(led,LOW);
  delay(1);
}