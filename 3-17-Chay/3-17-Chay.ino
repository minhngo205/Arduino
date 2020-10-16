#define flamePin A0
#define ledPin 13
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledPin,OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("Gia tri cam bien: ");
  int val = analogRead(flamePin);
  Serial.println(val);
  if (val<800){
    Serial.println("Co chay!! Run for your life");
    digitalWrite(ledPin, HIGH); // Bật đèn
    delay(100); // đợi 1s
    digitalWrite(ledPin, LOW);
    delay(100); // đợi 
  }
  else {
    digitalWrite(ledPin, LOW);
    Serial.println();
  }
  delay(100);
}
