#include <stdio.h>
/**
 * main - print sum of even fibionacci sequence
 * Return: 0
 */
int main(void)
{
	int a = 1;
	int b = 2;
	int total = 0;

	while (b < 4000000)
	{
		if (b % 2 == 0)
		{
			total += b;
		}

		int temp = b;

		b += a;
		a = temp;
	}
	printf("%d\n", total);

	return (0);
}
