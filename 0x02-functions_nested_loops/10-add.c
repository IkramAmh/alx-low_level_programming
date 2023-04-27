#include "main.h"

/**
 * add - prints the sum of two integers
 * @x: The first number to be summed
 * @y: The second number to be summed
 */

int add(int x, int y)
{
	int sum;

	sum = x + y;
	_putchar((sum / 10) + '0');
	_putchar((sum % 10) + '0');
}
