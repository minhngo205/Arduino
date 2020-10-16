#define ledPin 13
#define vibPin 3
unsigned char state=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin,OUTPUT);
  pinMode(vibPin,INPUT);
  attachInterrupt(1,blink,FALLING);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (state!=0){
    state = 0;
    digitalWrite(ledPin, HIGH);
    delay(500);  
  }
  else {
    digitalWrite(ledPin,LOW);
  }
}

void blink(){
  state++;
}
