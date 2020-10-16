int s0=3, s1=4, s2=5, s3=6;
int OutPut=2;
unsigned int frequency=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(s0, OUTPUT);
  pinMode(s1, OUTPUT);
  pinMode(s2, OUTPUT);
  pinMode(s3, OUTPUT);
  digitalWrite(s0, HIGH);
  digitalWrite(s1, LOW);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(s2, LOW);
  digitalWrite(s3, LOW);
  frequency=pulseIn(OutPut, LOW);
  Serial.print("Red=");
  Serial.println(frequency, DEC);
  delay(500);

  digitalWrite(s2, LOW);
  digitalWrite(s3, HIGH);
  frequency=pulseIn(OutPut, LOW);
  Serial.print("Blue=");
  Serial.println(frequency, DEC);
  delay(500);

  digitalWrite(s2, HIGH);
  digitalWrite(s3, HIGH);
  frequency=pulseIn(OutPut, LOW);
  Serial.print("Green=");
  Serial.println(frequency, DEC);
  delay(500);
}
