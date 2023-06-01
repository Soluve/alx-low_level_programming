#include "main.h"
/**
 * *string_toupper -  changes all lowercase letters of a string to uppercase.
 * @s: string to change
 * Return: string with uppercase letters
 */
char *string_toupper(char *s)
{
	while (*s)
		if (*s >= 'a' && *s <= 'z')
			*s = *s - 'a' + 'A';
		s++;
}

