#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: the size of the array
 * @c: the initializer char
 * Return: the array or NULL.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *t;

	if (size == 0)
	{
		return (NULL);
	}
	t = malloc(size * sizeof(char));
	if (t == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		t[i] = c;
	}
	return (t);
}
