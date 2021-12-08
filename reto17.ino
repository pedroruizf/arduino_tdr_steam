#include "ABlocks_LiquidCrystal_I2C.h" //llama a la librería LiquidCrystal_I2C

int turno = 0;
int SW1 = 2;
int SW2 = 7;

LiquidCrystal_I2C lcd_1(0x27, 16, 2); //configura una pantalla LCD llamada lcd_1 indidicando su tamaño 16x2

void setup()
{
  pinMode (SW1, INPUT);
  pinMode (SW2, INPUT);
  lcd_1.begin();//inicializa la pantalla
  lcd_1.noCursor();//quita la visualización del cursor
  lcd_1.backlight();//ilumina el fondo de pantalla
  pintaPantalla();
}


void loop()
{
  if (digitalRead (SW1) == HIGH) {
    turno = turno + 1;
    delay (300);
    pintaPantalla();
  }

  if (digitalRead (SW2) == HIGH) {
    turno = turno - 1;
    delay (300);
    pintaPantalla();
  }

  if (turno < 0) {
    turno = 0;
    pintaPantalla();
  }

}

void pintaPantalla () {
  lcd_1.clear();
  lcd_1.setCursor(0, 0);//pone el cursor en columna o y fila 0 (arriba a la izquierda)
  lcd_1.print("Turno: ");//escribe texto en pantalla
  lcd_1.setCursor(6, 0);
  lcd_1.print(turno);//escribe en pantalla la variable turno

}
