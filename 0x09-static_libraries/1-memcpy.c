#include "main.h"

/**
 * _memcpy - copies n bytes of src to dest
 * @dest: The array where to paste n bytes
 * @src: The array from where n bytes are copied
 * @n: The number of bytes to be copied
 * Return: The new dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
