#include <stdio.h>
#include "main.h"

/**
 * main - calculate the product of two integers
 * @argc: The number of arguments
 * @argv: arguments passed into the function
 * Return: 0 if success 1 otherwise.
 */

int main(int argc, char **argv)
{
	int a, b, prod;

	if (argc > 1 && argc <= 3)
	{
		a = (int)*argv[1];
		b = (int)*argv[2];
		prod = a * b;
		printf("%d\n", prod);
		return(0);
	}
	else
	{
		printf("Error\n");
		return(1);
	}
}
