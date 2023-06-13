#include "main.h"
/**
 * _isdigit - check digit 0 to 9
 * @c: integer argument
 * Return: return 1 if true and 0 if false
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}
