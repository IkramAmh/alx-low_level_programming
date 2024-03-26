#include "main.h"

/**
 * _strcat - prints twoo concatenated strings
 * @dest: The first string where to add the second
 * @src: The string to be added
 * Return: The concatenated string.
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int len = 0;

	while (dest[len] != '\0')
	{
		len++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len] = src[i];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
