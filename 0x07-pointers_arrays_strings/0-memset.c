#include "main.h"

/**
 * _memset - changes the first n bytes of
 * the memory s to the constant b byte
 * @s: The pointed array
 * @b: The value of the new n bytes
 * @n: The first n bytes of the memory to be changed
 * Return: The new s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
