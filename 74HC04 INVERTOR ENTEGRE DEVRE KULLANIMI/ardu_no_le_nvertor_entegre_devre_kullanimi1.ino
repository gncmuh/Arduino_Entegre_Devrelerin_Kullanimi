int pinler[2]={2,3};
volatile bool led=false;
void setup()
{
  Serial.begin(9600);
  for(uint8_t i=0; i<2; i++)
  {
    if(i!=0) {pinMode(pinler[i],OUTPUT);}
    else {pinMode(pinler[i],INPUT);}
  }
  attachInterrupt(digitalPinToInterrupt(pinler[0]),led_kontrol,FALLING);
}

void loop()
{
  digitalWrite(pinler[1],led);
  Serial.println(led);
  delay(1);
  
}
void led_kontrol(void) {led=!led;}
