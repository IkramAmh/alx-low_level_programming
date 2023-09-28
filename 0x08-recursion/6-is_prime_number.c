#include "main.h"
#include <stdio.h>

int checker(int i, int n);

/**
 * is_prime_number - prints if n is prime
 * @n: the integer to be checked
 * Return: 1 if prime 0 otherwise.
 */

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (checker(2, n));
}

/**
 * checker - checks if n is a prime
 * @i: a divisor
 * @n: the integer to be checked
 * Return: 1 if prime 0 otherwise.
 */

int checker(int i, int n)
{
	if (i == n)
	{
		return (1);
	}
	if (!(n % i))
	{
		return (0);
	}
	return (checker(i + 1, n));
}
