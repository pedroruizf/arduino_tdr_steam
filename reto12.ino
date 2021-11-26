void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  int cantidadRojo = random(255);
  int cantidadVerde = random(255);
  int cantidadAzul = random(255);
  color (cantidadRojo, cantidadVerde, cantidadAzul);
  delay (random (1000, 2000));

}

void color (int rojo, int verde, int azul) {
  int pinRojo = 6;
  int pinVerde = 9;
  int pinAzul = 10;
  analogWrite (pinRojo, rojo);
  analogWrite (pinVerde, verde);
  analogWrite (pinAzul, azul);

}
