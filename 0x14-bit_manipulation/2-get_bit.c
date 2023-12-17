#include "main.h"

/**
 * get_bit - returns bit at certain index
 * @n: the number to check
 * @index: the index of the returned bit
 * Return: bit at index.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(n) * 8)
	{
		return (-1);
	}
	return (n >> index & 1);
}
