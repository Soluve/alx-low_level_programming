#include <main.h>
/**
 * _putchar - writes the character c to stdout
 * * @c: The character to print
 * * Return: success 1.
 * when error occurs, return: -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
