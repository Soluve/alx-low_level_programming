#include <stdio.h>
/**
 * main - entry point
 * Return: success
 */
int main(void)
{
	int i;
	int c;
	int li;
	int lli;
	int f;

	printf("Size of a char: %lu byte(s)\n", sizeof(c));
	printf("Size of an int: %lu byte(s)\n", sizeof(i));
	printf("Size of a long int: %lu bytes(s)\n", sizeof(li));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(lli));
	printf("Size of a float: %lu bytes(s)\n", sizeof(f));
	return (0);
}
