#include "main.h"

/**
 * flip_bits - go from a number to another
 * @n: the first number
 * @m: the second number
 * Return: the number of bits to flip.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xortst = n ^ m;
	int count = 0;

	while (xortst)
	{
		if (xortst & 1ul)
			count++;
		xortst = xortst >> 1;
	}
	return (count);
}
