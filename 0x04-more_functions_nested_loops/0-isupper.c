#include "main.h"

/**
 * _isupper - returns the case of a character
 * @c: The character to be checked
 * Return: 1 if uppercase 0 otherwise.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
