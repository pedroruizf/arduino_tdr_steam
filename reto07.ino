
void setup() {
  // put your setup code here, to run once:
  pinMode (13, OUTPUT);
  pinMode (12, OUTPUT);
  pinMode (2, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(2) == HIGH) {
    secuencia();
  }

}

void secuencia() {
  int tiempo = 200;
  for (int n = 0; n < 5; n++) {
    digitalWrite (13, HIGH);
    delay (tiempo);
    digitalWrite (13, LOW);
    delay (tiempo);
    digitalWrite (12, HIGH);
    delay (tiempo);
    digitalWrite (12, LOW);
    delay (tiempo);
  }
}
