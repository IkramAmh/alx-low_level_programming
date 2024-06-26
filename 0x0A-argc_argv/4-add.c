#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - sums up the arguments passed to the program
 * @argc: the number of args
 * @argv: the arguments
 * Return: 1 if none digit 0 otherwise.
 */

int main(int argc, char *argv[])
{
	int i, x;
	int sum = 0;

	if (argc >= 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (*argv[i] < 48 || *argv[i] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		for (i = 1; i < argc; i++)
		{
			if (i > 0)
			{
				x = atoi(argv[i]);
				sum += x;
			}
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
