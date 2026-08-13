int ledpin=8;
int ldp=13;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledpin,OUTPUT);
  pinMode(ldp,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(ledpin,HIGH);
  delay(500);
  digitalWrite(ledpin,LOW);
  delay(500);
  digitalWrite(ldp,HIGH);
  delay(100);
  digitalWrite(ledpin,LOW);
}
