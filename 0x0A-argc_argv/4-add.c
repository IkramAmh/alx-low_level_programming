#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints te addition of the elements inputed
 * to the program
 * @argc: the number of arguments
 * @argv: the pointer to the arguments
 * Return: 0 is success 1 otherwise.
 */

int main(int argc, char *argv[])
{
	int i, tot = 0;

	if (argc < 2)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (*argv[i] < 48 || *argv[i] > 57)
				{
					printf("Error\n");
					return (1);
				}
			else
			{
				tot = tot + atoi(argv[i]);
			}
		}
		printf("%d\n", tot);
	}
	return (0);
}
