#include <stdio.h>
#include "main.h"

/**
 * main - prints all the arguements
 * @argc: The number of args
 * @argv: The args
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
