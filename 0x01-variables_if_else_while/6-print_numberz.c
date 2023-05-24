#include <stdio.h>
/**
 * main - Entry point of code
 * Return: Always 0
 */
int main(void)
{
	int a;

	while (a < 10)
	{
		putchar(a + '0');
		a++;
	}

	putchar('\n');

	return (0);
}
