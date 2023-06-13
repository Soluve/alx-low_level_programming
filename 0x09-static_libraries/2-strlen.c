#include "main.h"
/**
 * _strlen - returns lenght og string
 * @s: string
 * Return: return lenght
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
