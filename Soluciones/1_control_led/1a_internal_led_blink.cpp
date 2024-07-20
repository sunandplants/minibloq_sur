#include <mbq.h>
#include <PingIRReceiver.h>

void setup()
{
	initBoard();
	//Utilizando un loop while se mantiene led indentificado en la placa como D13 
	//prendiéndose y apagándose cada 100uS (microsegundos)
	while(true)
	{
		DigitalWrite(D13_LED, true);
		delay(100);
		DigitalWrite(D13_LED, false);
		delay(100);
	}
}

void loop()
{
}
