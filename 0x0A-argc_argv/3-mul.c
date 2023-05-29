#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the product of two numbers
 * @argc: The number of arguments
 * @argv: The pointer to main's arguments
 * Return: always successful.
 */

int main(int argc, char *argv[])
{
	int prod;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	prod = atoi(argv[1]) * atoi(argv[2]);
	
	printf("%d\n", prod);
	return (0);
}
