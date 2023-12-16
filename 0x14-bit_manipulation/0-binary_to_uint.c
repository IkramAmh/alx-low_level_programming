#include "main.h"

/**
 * binary_to_uint - convert binary string to decimal
 * @b: binary string
 * Return: decimal (unsigned int)or 0.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		decimal = decimal * 2 + (*b++ - '0');
	}
	return (decimal);
}
