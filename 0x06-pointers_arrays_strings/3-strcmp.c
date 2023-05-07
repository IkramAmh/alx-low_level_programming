#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: the first string to compare
 * @s2: The second string to compare
 * Return: The result of comparison.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int n;

	n = s1[i] - s2[i];
	while (*s1 && *s2 && n == 0)
	{
		s1++;
		s2++;
		n = s1++ - s2++;
	}
	return (n);
}
