#include <mbq.h>
#include <PingIRReceiver.h>

void setup()
{
	initBoard();
	while(true)
	{
		if(DigitalRead(D29_RunButton))
		{
			DigitalWrite(D13_LED, false);
		}
		else
		{
			DigitalWrite(D13_LED, true);
		}
		delay(100);
	}
}

void loop()
{
}
