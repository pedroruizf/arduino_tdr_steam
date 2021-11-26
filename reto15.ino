int valorpoten = 0;
int ledRojo = 12;
int ledAZul = 13;

void setup() {
  // put your setup code here, to run once:
  Serial.begin (9600);//establece comunicación serie a 9600 baudios
  pinMode (ledRojo, OUTPUT);
  pinMode (ledAZul, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  valorpoten = analogRead (A0);
  monitoriza();
  if (valorpoten < 512) {
    digitalWrite (ledRojo, HIGH);
    digitalWrite (ledAZul, LOW);
  }

  else {
    digitalWrite (ledRojo, LOW);
    digitalWrite (ledAZul, HIGH);
  }

}

void monitoriza() {//función que nos da la información de la luz en monitor serie
  Serial.print ("Valor de poten:");
  Serial.println (valorpoten);
  delay (1000);
}
