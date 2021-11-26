int valorPoten;

void setup() {
  // put your setup code here, to run once:
  Serial.begin (9600);//establece comunicación serie a 9600 baudios
}

void loop() {
  // put your main code here, to run repeatedly:
  valorPoten = analogRead (A0);
  monitoriza();
  int luzled =map (valorPoten,0,1023,0,255);
  color (luzled,luzled,luzled);
}

void monitoriza() {//función que nos da la información de la luz en monitor serie
  Serial.print ("Valor del potenciómetro:");
  Serial.println (valorPoten);
  delay (1000);
}

void color (int rojo, int verde, int azul) {
  int pinRojo = 6;
  int pinVerde = 9;
  int pinAzul = 10;
  analogWrite (pinRojo, rojo);
  analogWrite (pinVerde, verde);
  analogWrite (pinAzul, azul);

}
