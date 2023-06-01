#include "main.h"
/**
 * *_strncpy - copies string of n bytes to destination string
 * @src: string to be copied
 * @dest: string to be copied to
 * @n: n bytes to be copied
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
