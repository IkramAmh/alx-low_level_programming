#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory
 * @nmemb: The number of elements in the array
 * @size: their size
 * Return: m or NULL.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i, j;
	char *m;

	if (nmemb == 0 || size == 0)
		return (NULL);
	j = nmemb * size;
	m = malloc(j);
	if (m == NULL)
		return (NULL);
	while (i < j)
	{
		m[i] = 0;
		i++;
	}
	return (m);
}
