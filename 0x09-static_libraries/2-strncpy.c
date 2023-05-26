#include "main.h"

/**
 * _strncpy - copies one string in another
 * @dest: The first string
 * @src: The second string to be copied
 * @n: The size of the string to be copied
 * Return: retuns the copied string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != 0 && i <= n - 1; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
