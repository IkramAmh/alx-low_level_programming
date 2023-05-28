#include <stdio.h>
#include "main.h"

/**
 * main - prints the program's name
 * @argc: the parameter giving the number of args
 * @argv: The pointer to program's arguments
 * Return: always successful.
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
