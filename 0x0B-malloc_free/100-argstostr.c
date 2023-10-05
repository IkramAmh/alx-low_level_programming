#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all the args of a program
 * @ac: the number of args
 * @av: the args
 * Return: the array of args or NULL.
 */

char *argstostr(int ac, char **av)
{
	int i, j = 0, k = 0, len = 0;
	char *args;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		while (av[i][j])
		{
			len++;
			j++;
		}
		j = 0;
	}
	args = malloc((sizeof(char) * len) + ac + 1);
	i = 0;
	while (av[i])
	{
		while (av[i][j])
		{
			args[k] = av[i][j];
			k++;
			j++;
		}
		args[k] = '\n';
		j = 0;
		i++;
		k++;
	}
	k++;
	args[k] = '\0';
	return (args);
}
