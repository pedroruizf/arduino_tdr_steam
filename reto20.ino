#include "ABlocks_LiquidCrystal_I2C.h" //llama a la librería LiquidCrystal_I2C

float temperatura;
LiquidCrystal_I2C lcd_1(0x27, 16, 2); //configura una pantalla LCD llamada lcd_1 indicando su tamaño 16x2

void setup()
{
  lcd_1.begin();//inicializa la pantalla
  lcd_1.noCursor();//quita la visualización del cursor
  lcd_1.backlight();//ilumina el fondo de pantalla
  pintaPantalla();
}

void loop()
{
  int valorlm35 = analogRead(A2);
  float milivoltios = (valorlm35 / 1023.0) * 5 * 1000;
  temperatura = milivoltios / 10;
  pintaPantalla();

  if (temperatura < 0) {
    color (0, 0, 255);
  }
  else if (temperatura >= 0 && temperatura < 20) {
    color (0, map (temperatura, 0, 20, 0, 255) , 0);
  }
  else if (temperatura >= 20 && temperatura < 40) {
    color (map (temperatura, 20, 40, 0, 255), 0, 0);
  }
  else {
    color (255, 0, 0);
  }

  delay (1000);
}

void pintaPantalla () {
  lcd_1.clear();
  lcd_1.setCursor(0, 0);//pone el cursor en columna o y fila 0 (arriba a la izquierda)
  lcd_1.print("Temp.C:");//escribe texto en pantalla
  lcd_1.setCursor(7, 0);
  lcd_1.print(temperatura);//escribe en pantalla la variable temperatura

}

void color (int rojo, int verde, int azul) {
  int pinRojo = 6;
  int pinVerde = 9;
  int pinAzul = 10;
  analogWrite (pinRojo, rojo);
  analogWrite (pinVerde, verde);
  analogWrite (pinAzul, azul);

}
