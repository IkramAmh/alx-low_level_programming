#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - sums up the arguments
 * @argc: the number of main arguments
 * @argv: the arguments
 * Return: 0 if two args 1 otherwise.
 */

int main(int argc, char *argv[])
{
	int x, y;

	if (argc == 3)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		printf("%d\n", x * y);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
