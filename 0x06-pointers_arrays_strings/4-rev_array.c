#include "main.h"

/**
 * Reverse_array - reverse an array of integers
 * @a: first input
 * @n: number of elements
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	for ( ; --n > 0; ++a, --n)
	{
		*a ^= a[n];
		a[n] ^= *a;
		*a ^= a[n];
	}
}
