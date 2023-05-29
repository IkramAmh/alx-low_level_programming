#include <stdio.h>
#include "main.h"

/**
 * main - print all arguments it receives
 * @argc: The number of arguments
 * @argv: The pointer to main's arguments
 * Return: always successful.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
