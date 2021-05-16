#include "..\Timer_0\Timer_0.h"
#include "..\Usart\Usart.h"
#include "pin.h"
#include "arrays.h"
#include <stdint.h>
#include <util/delay.h>
#include <stdlib.h>
int main()
{
	int8_t str[50];
	int16_t Element(int16_t first_element, int16_t ratio, int16_t n);
	while(1)
	{


	usartPutSrtring(PSTR("Prvi element niza"));
	while(!usartAvailable());

	_delay_ms(1000);

	usartGetString(str);
	first_element = usartParseInt(str);

	usartPutString("Odnos");
	usartGetString(str);
	ratio = usartParseInt(str);

	usartPutString("n = ");
	usartGetString(str);

	n = usartParseInt(str);


	return 0;

}
