#include "main.h"
/**
 * _sqrt_recursion - print the natural square root of a number.
 * @n: integer argument
 * Return: natural square root, if not -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (real_sqrt_recursion(n, 0));
}
/**
 * real_sqrt_recursion - find natural square root of number
 * @n: number to calculate the sqaure root of
 * @i: iterator
 * Return: the resulting square root
 */
int real_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (real_sqrt_recursion(n, i + 1));
}
