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
	int i, x, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (argc == 0)
		{
			printf("0\n");
		}
		if (*argv[i] < 47 || *argv[i] > 57)
		{
			printf("Error\n");
			return (1);
		}
		x = atoi(argv[i]);
		if (x >= 0)
		{
			sum += x;
		}
	}
	printf("%d\n", sum);
	return (0);
}
