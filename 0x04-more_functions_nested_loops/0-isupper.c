#include "main.h"
/**
 * _isupper - check for uppercase letters
 * @c: character to be checked
 * Return: return 1 if uppercase and 0 if lowercase
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

		return (0);
}
