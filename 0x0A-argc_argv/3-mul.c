#include "main.h"
#include <stdio.h>

/**
 * main - sums up the arguments
 * @argc: the number of main arguments
 * @argv: the arguments
 * Return: 0 if two args 1 otherwise.
 */

int main(int argc, char *argv[])
{
	int x, y;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	sscanf(argv[1], "%d", &x);
	sscanf(argv[2], "%d", &y);
	printf("%d\n", x + y);
	return (0);
}
