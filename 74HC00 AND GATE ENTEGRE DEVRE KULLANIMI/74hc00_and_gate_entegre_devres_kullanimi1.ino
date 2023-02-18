const uint8_t led_pin PROGMEM= 2;
const uint8_t kapi_pin PROGMEM =3;
volatile bool led_durumu=false;
void setup()
{
  Serial.begin(9600);
  if(!Serial)
  {
    Serial.println(F("Seri Haberlesme Baslatimadi"));
    while(!bool(0));
  }
  else
  {
    pinMode(led_pin,OUTPUT);pinMode(kapi_pin,INPUT);
    attachInterrupt(1,kapi_led,HIGH);
  }
  
}

void loop()
{
  digitalWrite(led_pin,led_durumu);
  delay(1);
}

void kapi_led(void) {
  led_durumu=!led_durumu;
}
