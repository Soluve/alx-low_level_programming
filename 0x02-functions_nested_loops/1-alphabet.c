#include "main.h"
/**
 * main - Entry point of code
 * Return: 0
 */
void print_alphabet(void)
{
	char sol;

	sol = 'a';

	while (sol <= 'z')
	{
		_putchar(sol);
		sol++;
	}
	_putchar('\n');
}
