unsigned short ledPin = 2;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
unsigned short value = analogRead(A0);
Serial.print("Analog value: ");
Serial.println(value);

if(value > 450)
{
  digitalWrite(ledPin, LOW);
}else
{
digitalWrite(ledPin, HIGH);
}
delay(250);
}
