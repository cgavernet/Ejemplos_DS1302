
https://github.com/cgavernet

#include <virtuabotixRTC.h>
// Datos a comparar
int dia = 6;
int mes = 6;
int anio = 2666;

virtuabotixRTC reloj(6, 7, 8);

void setup(){
	pinMode(13, OUTPUT);	//Declao el pin 13 como SALIDA
}

void loop(){
	reloj.updateTime(); //Pedir la Fecha y Hora Axtualizadas al reloj}
	
	if (dia == reloj.dayofmonth){
		Serial.println("Hoy es 12");
	}

	if (mes == reloj.month){
		Serial.println("Mes 10");
	}

	if (anio == reloj.year){
		Serial.print("YeAAAA es 2019");
	}

	// El dia del juicio final
	// 6 del 6 del 2666
	if (dia == reloj.dayofmonth && mes == reloj.month && anio == reloj.year){
		Serial.println("Es el dia del juicio final");
	}

	// alarma Hora y Minutos
	// Alarma 1 -> 6:45 solamte los martes
	int HoraAlarma1 = 6;
	int MinutoAlarma1 = 45;
	int DiaSemAlarma1 = 2;
	// Alarma 2 -> 7:30 solamente los jueves
	int HoraAlarma2 = 7;
	int MinutoAlarma2 = 30;
	int DiaSemAlarma2 = 4;
	// Alarma 3 -> 7:50 solamente los jueves
	int HoraAlarma3 = 7;
	int MinutoAlarma3 = 50;
	int DiaSemAlarma3 = 4;

	if (DiaAlarma == reloj.dayofweek){

	}

	if (HoraAlarma1 == reloj.hour && MinutoAlarma1 == reloj.minutes && DiaSemAlarma1 == reloj.dayofweek){
		Serial.println("Alarma 1 -> Activada");
	}
	if (HoraAlarma3 == reloj.hour && MinutoAlarma3 == reloj.minutes && DiaSemAlarma3 == reloj.dayofweek){
		Serial.println("Alarma 1 -> Activada");
	}
	if (HoraAlarma2 == reloj.hour && MinutoAlarma2 == reloj.minutes && DiaSemAlarma2 == reloj.dayofweek){
		Serial.println("Alarma 2 -> Activada");
	}
	delay(60000);
}