int tiempo = 200;
int n;

void setup() {
  // put your setup code here, to run once:
  pinMode (13, OUTPUT);
  pinMode (12, OUTPUT);
  for (n = 0; n < 5; n++) {
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

void loop() {
  // put your main code here, to run repeatedly:

}
