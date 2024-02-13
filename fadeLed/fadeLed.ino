unsigned short ledPin = 9;


void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
unsigned short value;
for(value =0; value <=255; value++)
{
  analogWrite(ledPin, value);
delay(500);
}
for(value = 255; value >=0; value-=5)
{
  analogWrite(ledPin, value);
  delay(500);
}
}
