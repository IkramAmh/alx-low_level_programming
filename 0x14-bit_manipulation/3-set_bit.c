#include "main.h"

/**
 * set_bit - set the bit at index to 1
 * @n: the number to change
 * @index: the index
 * Return: 1 if it works -1 otherwise.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
	{
		return (-1);
	}
	return (!!(*n |= 1L << index));
}
