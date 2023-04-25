#include "main.h"

/**
 * _islower - checks for lowercases
 * Return : 1 f it's a lowercase and 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
