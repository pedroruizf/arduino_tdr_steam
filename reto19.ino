#include <Wire.h> //llama a la librería Wire
#include "ABlocks_LiquidCrystal_I2C.h" //llama a la librería LiquidCrystal_I2C
#include "ABlocks_DHT.h"//llama a la librería DHT

float temperatura;
float humedad;
LiquidCrystal_I2C lcd_1(0x27, 16, 2); //configura una pantalla LCD llamada lcd_1 indidicando su tamaño 16x2
DHT dht1(4, DHT11);//configura un elemento dht1 como DHT en el pin digital 4

void setup()
{
  lcd_1.begin();//inicializa la pantalla
  lcd_1.noCursor();//quita la visualización del cursor
  lcd_1.backlight();//ilumina el fondo de pantalla
  pinMode(4, INPUT);//pone el pin 4 el del DHH11 como de entrada
  dht1.begin();//inicializa el sensor dht
  pintaPantalla();
}


void loop()
{
  temperatura = dht1.readTemperature();
  humedad = dht1.readHumidity();
  pintaPantalla();
  delay (1000);
}

void pintaPantalla () {
  lcd_1.clear();
  lcd_1.setCursor(0, 0);//pone el cursor en columna 0 y fila 0 (arriba a la izquierda)
  lcd_1.print("Temp.C:");//escribe texto en pantalla
  lcd_1.setCursor(7, 0);
  lcd_1.print(temperatura);//escribe en pantalla la variable temperatura
  lcd_1.setCursor(0, 1);//pone el cursor en columna 0 y fila 1 (abajo a la izquierda)
  lcd_1.print("Hum. %:");//escribe texto en pantalla
  lcd_1.setCursor(7, 1);
  lcd_1.print(humedad);//escribe en pantalla la variable humedad

}
