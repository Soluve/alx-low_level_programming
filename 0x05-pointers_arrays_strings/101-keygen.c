#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -  generates random valid passwords for the program
 * Return: Always 0
 */
int main(void)
{
	int pword[100];
	int i, sum, n;

	sum = 0;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		pword[i] = rand() % 78;
		sum += (pword[i] + '0');
		putchar(pword[i] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}

	return (0);
}

