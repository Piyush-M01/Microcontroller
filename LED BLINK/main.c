#ifndef F_CPU
#define F_CPU 1600000UL
#endif
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRB |= (1<<DDB5);
	while (1)
	{
		PORTB |= (1<<PORTB5);
		_delay_ms(10000);
		PORTB &= ~ (1<<PORTB5);
		_delay_ms(1000);
	}
}

