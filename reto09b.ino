bool encendido = false;
int ledAzul = 13;
int pulsador1 = 2;
int pulsador2 = 7;

void setup() {
  // put your setup code here, to run once:
  pinMode (ledAzul, OUTPUT);// aquí el pin 13 se pone de salida
  pinMode (pulsador1, INPUT);//SW1
  pinMode (pulsador2, INPUT);//SW2
  digitalWrite (ledAzul, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(pulsador1) == HIGH || digitalRead (pulsador2) == HIGH) {
  encendido = !encendido;
  delay (300);
  }

  if (encendido == true) {
  digitalWrite (ledAzul, HIGH);
  }
  else {
    digitalWrite (ledAzul, LOW);
  }

}
