#include "main.h"

/**
 * reverse_array - reverses the elements of an array
 * @a: The array to be reversed
 * @n: The number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int i, m;

	for (i = n - 1; i >= n / 2; i--)
	{
		m = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = m;
	}
}
