#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: an array of integers
 * @n: the number of elements to swap
 */
void reverse_array(int *a, int n)
{
	int in, fi, tmp;

	fi = n - 1;

	for (in = 0; in < n / 2; in++)
	{
		tmp = a[in];
		a[in] = a[fi];
		a[fi--] = tmp;
	}
}
