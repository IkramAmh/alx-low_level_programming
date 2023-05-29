#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the product of two numbers
 * @argc: The number of arguments
 * @argv: The pointer to main's arguments
 * Return: always successful.
 */

int main(int __attribute__((unused)) argc, char *argv[])
{
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
