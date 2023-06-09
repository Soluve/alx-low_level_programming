#include "main.h"
/**
 * _pow_recursion - print  the value of x raised to the power of y.
 * @x: base integer
 * @y: power integer
 * Return: if y is negative return -1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (x == 0)
		return (0);

	if (x == 1 || y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
