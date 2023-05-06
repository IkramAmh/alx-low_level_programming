#include "main.h"

/**
 * *_strcat - prints twoo concatenated strings
 * @dest: The first string where to add the second
 * @src: The string to be added
 */

char *_strcat(char *dest, char *src)
{
	int i, j;
	int len1 = 0;
	int len2 = 0;

	while (dest[len1] != '\0')
	{
		len1++;
	}
	while (src[len2] != '\0')
	{
		len2++;
	}
	for (i = len1; i <= len2; i++)
	{
		for (j = 0; j <= len2; j++)
		{
			dest[i] = src[j];
		}
	}
	return (dest);
}
