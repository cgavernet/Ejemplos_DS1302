//Incluir la libreria del Reloj DS1302
#include <virtuabotixRTC.h>
String diadelasemana = "";
String mes = "";
//Creo el objeto reloj
//virtuabotixRTC reloj(SCL, DATA, RESET)
virtuabotixRTC reloj(6, 7, 8);

//Función de Inicialización del ucontrolador (Arduino)
//Solo se ejecuta 1 al iniciar el ucontrolador
void setup(){
	// Configuro la conexión Serial
	Serial.begin(9600);
	// Solicito al reloj que actualice las datos Fecha y Hora
	reloj.updateTime();
	// Convierto el di de la semana a Texto
	if (reloj.dayofweek == 1){
		diadelasemana = "Lunes";
	}
	if (reloj.dayofweek == 2){
		diadelasemana = "Martes";
	}
	if (reloj.dayofweek == 3){
		diadelasemana = "Miercoles";
	}
	if (reloj.dayofweek == 4){
		diadelasemana = "Jueves";
	}
	if (reloj.dayofweek == 5){
		diadelasemana = "Viernes";
	}
	if (reloj.dayofweek == 6){
		diadelasemana = "Sabado";
	}
	if (reloj.dayofweek == 7){
		diadelasemana = "Domingo";
	}
	// Convierto el mes a Texto
	if (reloj.month == 1){
		mes = "Enero";
	}
	if (reloj.month == 2){
		mes = "Febrero";
	}
	if (reloj.month == 3){
		mes = "Marzo";
	}
	if (reloj.month == 4){
		mes = "Abril";
	}
	if (reloj.month == 5){
		mes = "Mayo";
	}
	if (reloj.month == 6){
		mes = "Junio";
	}
	if (reloj.month == 7){
		mes = "Julio";
	}
	if (reloj.month == 8){
		mes = "Agosto";
	}
	if (reloj.month == 9){
		mes = "Septiembre";
	}
	if (reloj.month == 10){
		mes = "Octubre";
	}
	if (reloj.month == 11){
		mes = "Noviembre";
	}
	if (reloj.month == 12){
		mes = "Diciembre";
	}
	// Mostrar los datos en el puerto Serial
	//Serial.print(reloj.dayofweek);
	Serial.print(diadelasemana);
	Serial.print(", ");
	Serial.print(reloj.dayofmonth);
	Serial.print(" de ");
	//Serial.print(reloj.month);
	Serial.print(mes);
	Serial.print(" de ");
	Serial.println(reloj.year);
	// Viernes, 18 de Octubre de 2019
}

void loop(){
	delay(100);
}

