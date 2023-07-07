#include <stdio.h>
#include "main.h"

/**
 * main - gives the number of arguments
 * @argc: the number of arguments
 * @argv: the arguments
 * Return: always successful.
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
