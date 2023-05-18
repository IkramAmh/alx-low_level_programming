#include <stdio.h>
#include "main.h"

/**
 * _prime - checks if n is dividable by i
 * @i: The denominator
 * @n: The numenator
 * Return: is prime or not.
 */

int _prime(int i, int n)
{
	if (i >= n || n % i == 0)
	{
		return (0);
	}
	else if (n % i != 0)
	{
		return (1);
		_prime(i + 1, n);
	}
	return (_prime(i + 1, n));
}
/**
 * is _prime_number - checks if n is q prime number
 * @n: The number to check
 * Return: either n is prime or not.
 */

int is_prime_number(int n)
{
	return (_prime(2, n));
}
