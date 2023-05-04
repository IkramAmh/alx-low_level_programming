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
	if (j > 0)
	{
		for (i = 0; i < j; i++)
		{
			printf("%d, ", a[i]);
		}
	}
	else
	{
		printf("%d\n", a[j]);
	}
}
