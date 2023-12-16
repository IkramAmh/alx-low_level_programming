#include <stdlib.h>
#include "main.h"

unsigned int power(unsigned int n);

/**
 * binary_to_uint - convert binary string to decimal
 * @b: binary string
 * Return: decimal (unsigned int)or 0.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0, decimal = 0, weight = 0;
	unsigned int len = *(&b + 1) - b, i = len - 1;

	while (i <= len - 1)
	{
		if (*b != '0' || *b != '1' || b == NULL)
			return (0);
		n = power(weight) * (unsigned int) b[i];
		decimal+=n;
		i--;
		weight++;
	}
	return (decimal);
}

/**
 * power - calculate the number 2 rised to a power n
 * &n: the power
 * Return: 2 power of n.
 */

unsigned int power(unsigned int n)
{
	if (n == 0)
		return (1);
	if (n == 1)
		return (2);
	return (2 * power(n / 2));
}
