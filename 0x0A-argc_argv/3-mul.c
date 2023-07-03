#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - calculate the product of two integers
 * argc: The number of arguments
 * argv: arguments passed into the function
 * Return: 0 if success 1 otherwise
 */

int main(int argc, char *argv[])
{
	int prod;

	if (argc > 1)
	{
		prod = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", prod);
		return(0);
	}
	else
	{
		printf("Error\n");
		return(1);
	}
}
