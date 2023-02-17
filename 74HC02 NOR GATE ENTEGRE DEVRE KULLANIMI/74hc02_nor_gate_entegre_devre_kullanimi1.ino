uint8_t pinler[2]={2,3};
volatile bool yada_deger=false;
void setup()
{
  Serial.begin(9600);
  for(uint8_t i=0; i<2; i++) 
    if(i==0) pinMode(pinler[i],OUTPUT);
    else pinMode(pinler[i],INPUT);
  attachInterrupt(1,yada_durum,CHANGE);
}
void loop()
{
  digitalWrite(pinler[0],yada_deger);
                 
}
void yada_durum(void) {
  yada_deger=!yada_deger;
}
                  