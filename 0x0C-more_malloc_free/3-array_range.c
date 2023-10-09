#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: the starter
 * @max: the last integer
 * Return: ints or NULL.
 */

int *array_range(int min, int max)
{
	int i, *ints;

	if (min > max)
		return (NULL);
	ints = malloc((sizeof(int) * (max - min)) + sizeof(int));
	if (ints == NULL)
		return (NULL);
	while (min <= max)
	{
		ints[i] = min;
		i++;
		min++;
	}
	return (ints);
}
