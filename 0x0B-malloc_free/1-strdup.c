#include <stdlib.h>
#include "main.h"

/**
 * _strdup - copies an array in another
 * @str: the array to copy
 * Return: The array or NULL.
 */

char *_strdup(char *str)
{
	int i = 1, j = 0;
	char *copy;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i])
	{
		i++;
	}
	copy = malloc((sizeof(char) * i) + 1);
	if (copy == NULL)
	{
		return (NULL);
	}
	while (j < i)
	{
		copy[j] = str[j];
		j++;
	}
	copy[j] = '\0';
	return (copy);
}
