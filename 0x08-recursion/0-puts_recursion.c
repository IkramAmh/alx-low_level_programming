#include "main.h"

/**
 * _puts_recursion : reads the content of an array
 * @s: the array to be printed
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}

