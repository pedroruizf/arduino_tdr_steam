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
  float milivoltios = (valorlm35 / 1023.0) * 5*1000;
  temperatura = milivoltios / 10; 
  pintaPantalla();
  delay (1000);
}

void pintaPantalla () {
  lcd_1.clear();
  lcd_1.setCursor(0, 0);//pone el cursor en columna o y fila 0 (arriba a la izquierda)
  lcd_1.print("Temp.C:");//escribe texto en pantalla
  lcd_1.setCursor(7, 0);
  lcd_1.print(temperatura);//escribe en pantalla la variable temperatura

}
