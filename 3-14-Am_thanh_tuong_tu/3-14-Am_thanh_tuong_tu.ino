#define voicePin 0
int ledpin=13;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledpin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val;
  val = analogRead(voicePin);
  if(val>=500){digitalWrite(ledpin,HIGH);}
  else {digitalWrite(ledpin,LOW);}
  Serial.println(val);
  delay(100);
}
