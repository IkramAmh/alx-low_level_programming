#include <stdio.h>
#include "main.h"

/**
 * main - gives all the arguments it receives
 * @argc: the number of arguments
 * @argv: the argumets
 * Return: always 0.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i <= argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
