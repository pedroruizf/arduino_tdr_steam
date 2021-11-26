void setup() {
  // put your setup code here, to run once:
  pinMode (13, OUTPUT);// aquí el pin 13 se pone de salida
  pinMode (2, INPUT);//SW1
  pinMode (7, INPUT);//SW2
  digitalWrite (13,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(2) == HIGH) {
    digitalWrite(13, HIGH);
  }
  else if (digitalRead(7) == HIGH) {
    digitalWrite(13, LOW);
  }

}
