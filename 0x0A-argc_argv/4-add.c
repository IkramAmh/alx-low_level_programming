#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - adds up arguments
 * @argc: The number of arguments
 * @argv: The args
 * Return: 0 if successful 1 otherwise.
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (*argv[i] < 48 || *argv[i] > 58)
			{
				printf("Error\n");
				return (1);
			}
			if (atoi(argv[i]) >= 0)
			{
				sum = sum + atoi(argv[i]);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
