#include "main.h"

/**
 * string_toupper - converts uppercases to lowercases
 * @a: The array to be converted
 * Return: Returns a in lowercase.
 */

char *string_toupper(char *a)
{
	int i = 0;

	while (a[i])
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] -= 32;
		}
		i++;
	}
	return (a);
}
