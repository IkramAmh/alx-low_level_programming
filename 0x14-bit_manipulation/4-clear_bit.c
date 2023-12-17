#include "main.h"

/**
 * clear_bit - set a bit at index to 0
 * @n: the number to change
 * @index: the index
 * Return: 1 if ok -1 otherwise.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	if (*n & 1L << index)
		*n ^= 1L << index;
	return (1);
}
