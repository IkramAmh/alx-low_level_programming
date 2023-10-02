#include <stdio.h>
#include "main.h"

/**
 * main - gives the name of the program
 * @argc: the number of parameters
 * @argv: the parameters
 * Return: the name of the program.
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
