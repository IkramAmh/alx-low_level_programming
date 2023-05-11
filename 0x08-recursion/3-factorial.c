#include "main.h"

/**
 * factorial - returns factorial of a number
 * @n: The number
 * Return: The factorial of the number.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
