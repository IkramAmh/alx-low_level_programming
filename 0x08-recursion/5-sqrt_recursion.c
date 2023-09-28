#include "main.h"
#include <stdio.h>

int calculator(int n, int b);

/**
 * _sqrt_recursion - prints the natural square root of n
 * @n: the base number
 * Return: the result.
 */

int _sqrt_recursion(int n)
{
	return (calculator(1, n));
}

/**
 * calculator - finds the square root of a number b
 * @n: the square root
 * @b: the base number
 * return: The result.
 */

int calculator(int n, int b)
{
        if (n * n == b)
        {
                return (n);
        }
        if ((n * n > b) || (n <= 0))
        {
                return (-1);
        }
        return (calculator(n + 1, b));
}
