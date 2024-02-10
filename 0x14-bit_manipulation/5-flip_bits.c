#include "main.h"

/**
 * flip_bits - gives the number of bits to flip
 * @n: the first number
 * @m: the second number
 * Return: The number of bits or -1.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int xornm = n ^ m;
	int count = 0;

	while (xornm)
	{
		if (xornm & 1lu)
			count++;
		xornm = xornm >> 1;
	}
	return (count);
}
