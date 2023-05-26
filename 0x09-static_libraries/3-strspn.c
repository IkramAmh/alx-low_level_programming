#include "main.h"

/**
 * _strspn - returns the length of substring
 * @s: the main array pointer
 * @accept: The substring
 * Return: The length of prefic substring.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, n, m;

	n = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		m = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				n++;
				m = 1;
			}
		}
		if (m == 0)
		{
			return (n);
		}
	}
	return (n);
}
