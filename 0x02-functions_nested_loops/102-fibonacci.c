#include <stdio.h>
/**
 * main - print 50 Fibonacci numbers
 * Return: 0
 */
int main(void)
{
	int n = 50;
	int counter;
	long a = 1;
	long b = 2;

	for (counter = 1; counter <= (n / 2); counter++)
	{
		printf("%li %li ", a, b);
		a += b;
		b += a;
	}
	if (a % 2 == 1)
		printf("%li", a);

	printf("\n");

	return (0);
}
