#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - conctenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: the limit of concat
 * Return: strcnt or NULL.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, r = 0, s = 0;
	char *strcnt;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
	{
		i++;
	}
	while (s2[j])
	{
		j++;
	}
	if (n >= j)
		s = i + j;
	else
		s = i + n;
	strcnt = malloc((sizeof(char) * s) + 1);
	if (strcnt == NULL)
		return (NULL);
	j = 0;
	while (r < s)
	{
		if (r <= i)
		{
			strcnt[r] = s1[r];
		}
		if (r >= i)
		{
			strcnt[r] = s2[j];
			j++;
		}
		r++;
	}
	strcnt[r] = '\0';
	return (strcnt);
}

