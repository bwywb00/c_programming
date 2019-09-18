
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{

	#define F_CPU	16000000UL
	#include <avr/io.h>
	#include <util/delay.h>

	void init_led(void)
	{
		DDRC = 0x01;
		PORTC = 0x00;
	}

	void led_on(void)
	{
		PORTC = 0x01;
	}

	void led_off(void)
	{
		PORTC = 0x00;
	}

	int main(void)
	{
		init_led();
		
		while (1)
		{
			led_on();
			_delay_ms(500);
			led_off();
			_delay_ms(500);
		}
		return 0;
	}
}