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
	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) + atoi(argv[2]));
	return (0);
}
