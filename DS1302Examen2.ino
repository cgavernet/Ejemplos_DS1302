#include <virtuabotixRTC.h>

virtuabotixRTC reloj(6, 7, 8);

void setup(){
	pinMode(13, OUTPUT);	//Declao el pin 13 como SALIDA
}

void loop(){
	reloj.updateTime(); //Actualizo los datos del Reloj
	if (reloj.dayofweek == 1){
		digitalWrite(13,HIGH);
		delay(400);
		digitalWrite(13,LOW);
		delay(200);
	}
	if (reloj.dayofweek == 2){
		digitalWrite(13,HIGH);
		delay(400);
		digitalWrite(13,LOW);
		delay(200);
		digitalWrite(13,HIGH);
		delay(400);
		digitalWrite(13,LOW);
		delay(200);
	}
	if (reloj.dayofweek == 3){
		digitalWrite(13,HIGH);
		delay(400);
		digitalWrite(13,LOW);
		delay(200);
		digitalWrite(13,HIGH);
		delay(400);
		digitalWrite(13,LOW);
		delay(200);
		digitalWrite(13,HIGH);
		delay(400);
		digitalWrite(13,LOW);
		delay(200);
	}

	//...}
	delay(60000);
}