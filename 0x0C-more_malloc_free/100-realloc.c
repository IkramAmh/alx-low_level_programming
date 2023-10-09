#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocates a memory block
 * @ptr: the poiter to the previous memory
 * @old_size: the size of ptr
 * @new_size: the size of the new memory block
 * Return: newptr or NULL.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		newptr = malloc(new_size);
		if (newptr == NULL)
			return (NULL);
		return (newptr);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}
	newptr = malloc(new_size);
	if (newptr == NULL)
		return (NULL);
	for (i = 0; i < old_size && i < new_size; i++)
	{
		*newptr = ((char *) ptr)[i];
	}
	free(ptr);
	return (newptr);
}
