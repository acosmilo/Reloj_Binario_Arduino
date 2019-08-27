

#include <Arduino.h>
#include <Wire.h>
#include <RTClib.h>

#include "Reloj.h"

RTC_DS3231 rtc;
Reloj reloj;

int col[] = {3, 4, 5, 6};
int fila[] = {7, 8, 9, 10};
int vdm = 1; //variable delay multiplexacion
int aux;

void setup()
{
  Serial.begin(9600);

  if (!rtc.begin())
  {                                               // si falla la inicializacion del modulo
    Serial.println("Modulo RTC no encontrado !"); // muestra mensaje de error
    while (1)
      ; // bucle infinito que detiene ejecucion del programa
  }
  rtc.adjust(DateTime(__DATE__, __TIME__)); // funcion que permite establecer fecha y horario
                                            // al momento de la compilacion. 

  for (int i = 0; i <= 3; i++)
  {
    pinMode(col[i], OUTPUT);
  }
  for (int i = 0; i <= 3; i++)
  {
    pinMode(fila[i], OUTPUT);
  }
  pinMode(1,OUTPUT);
  pinMode(13, OUTPUT);
}

void loop()
{
  DateTime fecha = rtc.now(); // funcion que devuelve fecha y horario en formato
                              // DateTime y asigna a variable fecha
  
  aux=fecha.second() % 2;  
 
  reloj.swHoraDecenas(fecha.hour(),col,fila);
  delay(vdm);
  reloj.swHoraUnidades(fecha.hour(),col,fila);
  delay(vdm);
  reloj.swMinDecenas(fecha.minute(),col,fila);
  delay(vdm);
  reloj.swMinUnidades(fecha.minute(),col,fila);
  delay(vdm);
  
  if (aux==0)
  {
    digitalWrite(1,HIGH);
  }
  else 
  {
    digitalWrite(1,LOW);
  }
  

}