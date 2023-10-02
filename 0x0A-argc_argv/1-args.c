#include <stdio.h>
#include "main.h"

/**
 * main - gives the number of arguments
 * @argc: the number of arguments
 * @argv: the arguments passed to the program
 * Return: the number of arguments.
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
