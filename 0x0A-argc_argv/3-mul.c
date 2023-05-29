#include <stdio.h>
#include "main.h"

/**
 * main - prints the product of two numbers
 * @argc: The number of arguments
 * @argv: The pointer to main's arguments
 * Return: always successful.
 */

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", (int) *argv[1] * (int) *argv[2]);
	return (0);
}
