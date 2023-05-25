#include "main.h"
/**
 * print_alphabet_x10 - print alphabet in lowercase ten times
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char sol;
	int times;

	for (times = 1; times <= 10; times++)
	{
		for (sol = 'a'; sol <= 'z'; sol++)
		{
			_putchar(sol);
		}
		_putchar('\n');
	}
}
