#include "main.h"
/**
 * jack_bauer - prints every minutes of a day
 * Return: void
 */
void jack_bauer(void)
{
	int hr = 0;
	int min = 0;

	while (hr < 24)
	{
		while (min < 60)
		{
			_putchar('0' + (hr / 10));
			_putchar('0' + (hr % 10));
			_putchar(':');
			_putchar('0' + (min / 10));
			_putchar('0' + (min % 10));
			_putchar('\n')
			min++;
		}
		min = 0;
		hr++;
	}
}
