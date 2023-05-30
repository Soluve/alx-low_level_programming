#include "main.h"
/**
 * print_rev - print a string in reverse
 * @s: string
 */
void print_rev(char *s)
{

	int len = 0;
	int a;

	/* find length of string and point to last character */
	while (*s != '\0')
	{
		len++;
		++s;
	}

	/* go back to previous character before null character */
	s--;

	/* print string in reverse */
	for (a = len; a > 0; a--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
