#include <stdio.h>
#include "main.h"

/**
 * main - calculates the product of two integers
 * @argc: The number of arguments
 * @argv: arguments passed into the function
 * Return: 0 if success 1 otherwise.
 */

int main(int argc, char *argv[])
{
	int a, b, p;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	sscanf(argv[1], "%d", &a);
	sscanf(argv[2], "%d", &b);
	p = a * b;
	printf("%d\n", p);
	return (0);
}
