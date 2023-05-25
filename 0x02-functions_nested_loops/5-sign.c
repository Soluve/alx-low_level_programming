#include "main.h"
/**
 *  print_sign - print the sign of character
 *  @n: number to check
 *  Return: return 1 if greater than 0, 0 if equal to 0, -1 if less than
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	_putchar('\n');
}
