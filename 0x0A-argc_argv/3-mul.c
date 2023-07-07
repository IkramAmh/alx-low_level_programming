#include <stdio.h>
#include "main.h"

/**
 * main - calculate the product of two integers
 * @argc: The number of arguments
 * @argv: arguments passed into the function
 * Return: 0 if success 1 otherwise.
 */

int main(int argc, char *argv[])
{
	int a, b, prod;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	sscanf(argv[1], "%d", &a);
	sscanf(argv[2], "%d", &b);
	prod = a * b;
	printf("%d\n", prod);
	return (0);
}
