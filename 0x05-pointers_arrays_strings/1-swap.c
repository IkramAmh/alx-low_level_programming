#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: The first integer to be swaped
 * @b: The second integer to be swaped
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
