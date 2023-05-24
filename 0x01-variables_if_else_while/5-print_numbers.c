#include <stdio.h>
/**
 * main - Entry point of code
 * Return: Always 0
 */
int main(void)
{
	char a;

	for (a = 0; a < 10; a++)
		putchar(a + '0');

	putchar('\n');

	return (0);
}
