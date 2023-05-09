#include <stdio.h>
#include "main.h"

/**
 * _strstr - prints needle if its occurs in
 * haystack
 * @haystack: the main string
 * @needle: the substring
 * Return: haystack.
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *n = haystack;
		char *m = needle;
		
		while (*n == *m && *m != '\0')
		{
			haystack++;
			needle++;
		}
		if(*m == '\0')
		{
			return (haystack);
		}
	}
	return (NULL);
}
