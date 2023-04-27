#include <stdio.h>

/**
 * print_to_98 - prints numbers between
 * n and 98
 * @n: the starting number
 * Return: numbers ... 98.
 */

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i < 98; i++)
		{
			printf("%d, ", n++);
		}
		printf("%d\n", n);
	}
	else
	{
		for (i = n; i > 98; i--)
		{
			printf("%d, ", n--);
		}
		printf("%d\n", n);
	}
}
