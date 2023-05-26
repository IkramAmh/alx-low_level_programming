#include "main.h"

/**
 * *_strcpy - copies the string pointed by src
 * into the string poited bu dest
 * @dest: The buffer where the string will be pasted
 * @src: The string to be copied
 * Return: The content of dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int j = 0;

	while (src[j] != '\0')
	{
		j++;
	}
	for (i = 0; i <= j; i++)
	{
		dest[i] = src[i];
	}
	dest[j + 1] = '\0';
	return (dest);
}
