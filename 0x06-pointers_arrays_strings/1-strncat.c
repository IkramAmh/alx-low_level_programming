#include "main.h"

/**
 * _strncat - returns concatenqted strings
 * @dest: The string to be extended
 * @src: The string to be added
 * @n: The number of bytes to be added
 * Return: Concatenated strings.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int len = 0;

	while (dest[i++])
	{
		len++;
	}
	for (i = 0; src[i] && i <= n - 1; i++)
	{
		dest[len++] = src[i];
	}
	return (dest);
}
