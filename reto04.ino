int tiempo = 200;
int n;

void setup() {
  // put your setup code here, to run once:
  pinMode (13, OUTPUT);
  pinMode (12, OUTPUT);
  n = 0;
  while (n < 5) {
    secuencia();
    n = n + 1;
  }

}

void loop() {
  // put your main code here, to run repeatedly:

}

void secuencia() {
  digitalWrite (13, HIGH);
  delay (tiempo);
  digitalWrite (13, LOW);
  delay (tiempo);
  digitalWrite (12, HIGH);
  delay (tiempo);
  digitalWrite (12, LOW);
  delay (tiempo);
}
