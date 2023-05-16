#include <stdio.h>

/**
 * _sqrt - checks the input number from i to n
 * @i: The starter
 * @n: The base
 * Return: The value of i.
 */

int _sqrt(int i, int n)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	return (_sqrt(i + 1, n));
}
/**
 * _sqrt_recursion - prints the square root of n
 * @n: The number to calculate its sqrt
 * Return: The square root of n.
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(1, n));
}
