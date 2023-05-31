#include "main.h"
/**
 * *_strncat - concatenates two strings
 * @dest: first string
 * @src: second string
 * @n: number of bytes
 * Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;

	while (*dest)
		dest++;
	for (i = 0; i < n; i++)
	{
		while (*src)
		{
			*dest = *src;
			dest++;
			src++;
		}
	*dest = '\0';
	}

	return (dest);
}
