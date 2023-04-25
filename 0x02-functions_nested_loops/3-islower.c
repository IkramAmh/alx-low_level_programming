#include "main.h"

/**
 * _islower - checks for lowercases
 * c is an ascii value of the letter
 * Return: 1 if it's a lowercase and 
 * 0 otherwise.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
