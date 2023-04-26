#include "main.h"

/**
 * print_last_digit - prints the last
 * digit of a integer
 * @c: The number we look for its last digit
 * Return: the value of the ldig
 */

int print_last_digit(int c)
{
	int ldig;

	ldig = c % 10;
	if (ldig < 0)
	{
		ldig = ldig * -1;
	}
	_putchar(ldig + '0');
	return (ldig);
}
