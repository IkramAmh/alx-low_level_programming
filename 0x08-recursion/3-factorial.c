#include "main.h"

/**
 * factorial - calculate the factorial of a integer
 * @n: The integer to be processed
 * Return: the factorial of n.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
