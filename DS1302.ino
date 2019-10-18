#include <virtuabotixRTC.h>  

// Creo el Obtjeto reloj (SCL, DATA, CE)
//virtuabotixRTC reloj(6, 7, 8);
virtuabotixRTC reloj(A1, A2, A3);

void setup()  {      
  Serial.begin(115200);

// Seteo el tiempo actual
// seconds, minutes, hours, day of the week, day of the month, month, year
 reloj.setDS1302Time(00, 01, 11, 1, 26, 8, 2019);
}


void loop()  {                                                                                           //| 
// Actualizo las variables individuales para obtener los valores del reloj                               //|
  reloj.updateTime();                                                                                    //| 
                                                                                                         //| 
// Imprimo de forma individual los valores                                                               //|   
  Serial.print("Hora y Fecha Actual: ");                                                                 //| 
  Serial.print(reloj.dayofmonth);                                                                        //| 
  Serial.print("/");                                                                                     //| 
  Serial.print(reloj.month);                                                                             //| 
  Serial.print("/");                                                                                     //| 
  Serial.print(reloj.year);                                                                              //| 
  Serial.print("  ");                                                                                    //| 
  Serial.print(reloj.hours);                                                                             //| 
  Serial.print(":");                                                                                     //| 
  Serial.print(reloj.minutes);                                                                           //| 
  Serial.print(":");                                                                                     //| 
  Serial.println(reloj.seconds);                                                                         //| 
  //snprintf(datetime, ""                                                                                           //| 
String datetime;
datetime = "Hora: " + String(reloj.hours) + ":" + reloj.minutes + ":" + reloj.seconds;
Serial.println(datetime); 
// Retardo para refresco de los valores                                                                  //| 
  delay( 5000);                                                                                          //| 
}                              
