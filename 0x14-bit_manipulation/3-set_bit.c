#include "main.h"

/**
 * set_bit - set the value of a bit to 1 at a given index
 * @n: the number to process
 * @index: the index to change
 * Return: 1 if success -1 otherwize.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return (!!(*n |= 1L << index));
}
