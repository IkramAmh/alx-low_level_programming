#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: the first string to compare
 * @s2: The second string to compare
 * return: The result of comparison
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int n;

	while (s1[i] != '\0')
	{
		while (s2[i] != '\0')
		{
			n = s1[i] - s2[i];
			if (n != 0)
			{
			}
			else
			{
				do
				{
					i++;
					n = s1[i] - s2[i];
				}
				while (n == 0);
			}
		}
	}
	return (n);
}
