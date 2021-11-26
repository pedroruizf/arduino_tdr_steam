const int do2 = 261;
const int re = 293;
const int mi = 329;
const int fa = 349;
const int sol = 392;
const int la = 440;
const int si = 493;
const int duracion = 1000;
const int retardo = 500;
const int zumbador = 8;

void setup() {
  pinMode (zumbador, OUTPUT);
  escala();
}

void loop() {

}

void escala() {
  tone(zumbador, do2, duracion);
  delay(retardo);
  tone(zumbador, re, duracion);
  delay(retardo);
  tone(zumbador, mi, duracion);
  delay(retardo);
  tone(zumbador, fa, duracion);
  delay(retardo);
  tone(zumbador, sol, duracion);
  delay(retardo);
  tone(zumbador, la, duracion);
  delay(retardo);
  tone(zumbador, si, duracion);
  delay(retardo);
  tone(zumbador, do2, duracion);
  delay(retardo);
}
