int intensidad = 0;
int ledRojo=6;
int ledVerde=9;
int ledAzul=10;
 
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  for (intensidad = 0; intensidad < 256; intensidad++) {
    analogWrite (ledRojo, intensidad);
    delay (10);
  }
  for (intensidad = 255; intensidad >=0; intensidad--) {
    analogWrite (ledRojo, intensidad);
    delay (10);
  }
}
