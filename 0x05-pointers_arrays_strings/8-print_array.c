#include "main.h"
#include <stdio.h>
/**
 * print_array - print elements of array
 * @a: array
 * @n: number of element
 */
void print_array(int *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
