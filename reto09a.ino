bool encendido = false;

void setup() {
  // put your setup code here, to run once:
  pinMode (13, OUTPUT);// aquí el pin 13 se pone de salida
  pinMode (2, INPUT);//SW1
  digitalWrite (13, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(2) == HIGH) {
    encendido = !encendido;
    delay (300);
  }

  if (encendido == true) {
    digitalWrite (13, HIGH);
  }
  else {
    digitalWrite (13, LOW);
  }

}
