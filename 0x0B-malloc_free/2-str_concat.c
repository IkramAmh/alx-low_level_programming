#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return: the concatenated string or empty.
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, m = 0, n = 0;
	char *s;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[i])
	{
		i++;
	}
	while (s2[j])
	{
		j++;
	}
	n = i + j;
	s = malloc((n * sizeof(char)) + 1);
	j = 0;
	while (m < n)
	{
		if (m <= i)
		{
			s[m] = s1[m];
		}
		if (m >= i)
		{
			s[m] = s2[j];
			j++;
		}
		m++;
	}
	s[m] = '\0';
	return (s);
}
