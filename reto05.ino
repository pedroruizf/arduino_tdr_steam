int tcorto = 100;
int tlargo = 300;
int tletras = 300;
int tpalabras = 1000;

void setup() {
  // put your setup code here, to run once:
  pinMode (8, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  s();
  delay (tletras);
  o();
  delay (tletras);
  s();
  delay (tpalabras);
}

void s() {

  for (int n = 0; n < 3; n++) {
    tone (8, 261);
    delay (tcorto);
    noTone(8);
    delay (tcorto);
  }

}

void o() {
  for (int n = 0; n < 3; n++) {
    tone (8, 261);
    delay (tlargo);
    noTone(8);
    delay (tlargo);
  }
}
