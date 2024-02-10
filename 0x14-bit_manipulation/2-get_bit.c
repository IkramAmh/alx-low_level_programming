#include "main.h"

/**
 * get_bit - gets the bit of a number at an index
 * @n: the numberr to process
 * @index: the index of the bit
 * Return: the bit or -1.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit = sizeof(n) * 8;

	if (index >= bit)
		return (-1);
	return (n >> index & 1);
}
