#include "main.h"
/**
 * swap_int - swap the values of two integeres
 * @a: first integer
 * @b: second integer
 */
void swap_int(int *a, int *b)
{
	int swerp;

	swerp = *a;
	*a = *b;
	*b = swerp;
}
