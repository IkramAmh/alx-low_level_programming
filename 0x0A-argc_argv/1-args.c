#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of args
 * @argc: The number of arguments
 * @argv: a pointer to the arguments
 * Return: always successful.
 */

int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
