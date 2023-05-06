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
	int i;
	int len = 0;

	while (dest[len] != '\0')
	{
		len++;
	}
	for (i = 0; i <= n - 1; i++)
	{
		dest[len] = src[i];
		len++;
	}
	return (dest);
}
