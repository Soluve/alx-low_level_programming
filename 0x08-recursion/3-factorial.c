#include "main.h"
/**
 * factorial - print the factorial of a given number.
 * @n: integer
 * Return: if n is negative return -1
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
		return (n * factorial(n - 1));
}
