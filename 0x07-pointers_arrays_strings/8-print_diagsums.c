#include <stdio.h>
#include "main.h"

/**
 * print_diagsums: prints the sums of diagonals elements
 * @a: The array
 * @size: The size of the array.
 */

void print_diagsums(int *a, int size)
{
	int i, j, D1 = 0, D2 = 0;

	for (i = 0; i <= (size * size); i = i + size + 1)
	{
		D1 = D1 + a[i];
	}
	for (j = size - 1; j <= (size * size) - size; i = i + size - 1)
	{
		D2 = D2 + a[j];
	}
	printf("%d, %d\n", D1, D2);
}
