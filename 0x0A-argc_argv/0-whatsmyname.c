#include <stdio.h>
#include "main.h"

/**
 * main - gives the name of the program
 * @argc: The number of arguments
 * @argv: The arguments
 * Return: always succesful
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
