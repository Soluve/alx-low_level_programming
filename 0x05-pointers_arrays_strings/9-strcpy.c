#include "main.h"
/**
 * *_strcpy - copy value of src to dest
 * @src: buffer from which we are copying
 * @dest: buffer to which we are copying
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, a;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (a = 0; a < len; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';

	return (dest);
}
