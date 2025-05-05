#include <avr/io.h>
#include<util/delay.h>

int main (void){
	DDRD|= 0xE0;
	while (1){
		PORTD&= 0x1F;
		PORTD|= 0x80;
		_delay_ms(30000);
		PORTD&= 0x1F;
		PORTD|= 0x40;
		_delay_ms(3000);
		PORTD&= 0x1F;
		PORTD|= 0x20;
		_delay_ms(15000);
	}
}