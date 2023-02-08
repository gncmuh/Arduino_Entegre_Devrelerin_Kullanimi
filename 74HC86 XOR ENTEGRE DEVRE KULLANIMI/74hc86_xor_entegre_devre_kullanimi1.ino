const int kesme_pin=3;
int led=2;
volatile bool led_durum=false;
void setup()
{
  Serial.begin(9600);
  pinMode(kesme_pin,INPUT);pinMode(led,OUTPUT);
  attachInterrupt(1,led_kont,CHANGE);
}

void loop()
{
  digitalWrite(led,led_durum);
}

void led_kont(void) {
  led_durum=!led_durum;
}