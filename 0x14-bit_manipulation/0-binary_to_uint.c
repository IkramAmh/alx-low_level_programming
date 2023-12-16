#include <stdlib.h>
#include "main.h"

unsigned int power(unsigned int n);

/**
 * binary_to_uint - convert binary string to decimal
 * @b: binary string
 * Return: decimal (unsigned int)
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0, weight = 0;
	unsigned i, len = *(&b + 1) - b;

	while (i <= len - 1)
	{
		if (*b != '0' || *b != '1' || b == NULL)
			return (0);
		decimal = power(weight) * (unsigned int) b[i];
		decimal++;
		i--;
		weight++;
	}
	return (decimal);
}

unsigned int power(unsigned int n)
{
	if (n == 0)
		return (1);
	if (n == 1)
		return (2);
	return (2 * power(n / 2));
}
