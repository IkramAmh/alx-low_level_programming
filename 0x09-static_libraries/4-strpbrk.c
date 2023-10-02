#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - returns a pointer in s that matches
 * one of the bytes in accept
 * @s: The string to compare
 * @accept: the string to compare to
 * Return: a pointer to the byte that matches.
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (NULL);
}
