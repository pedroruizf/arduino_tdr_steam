int intensidad = 0;
int ledRojo = 6;
int ledVerde = 9;
int ledAzul = 10;
int pulsador = 2;
int incremento = 32;

void setup() {
  // put your setup code here, to run once:
  pinMode (pulsador, INPUT);
  Serial.begin (9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite (ledVerde, intensidad);
  if (digitalRead (pulsador) == HIGH) {
    intensidad = intensidad + incremento;
    delay (300);
  }

  if (intensidad > 255) {
    intensidad = 255;
    incremento = incremento * -1;
  }

  if (intensidad < 0) {
    intensidad = 0;
    incremento = incremento * -1;
  }
}
