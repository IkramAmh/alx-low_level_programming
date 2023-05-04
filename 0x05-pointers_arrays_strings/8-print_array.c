#include <stdio.h>
#include "main.h"

/**
 * print_array - prints the elements of
 * an array in the same order
 * @a: The array to be printed
 * @n: The number of element to be printed
 */

void print_array(int *a, int n)
{
	int i;
	int j = 0;
	
	while (a[j] <= n - 1)
	{
		j++;
	}
	for (i = 0; i < n - 1; i++)
	{
		printf("%d, ", a[i]);
	}
	if (i == n - 1 && n > 0)
	{
		printf("%d\n", a[i]);
	}
}
