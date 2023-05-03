#include "main.h"

/**
 * _puts - inputs strings
 * @str: The string to be inputed
 */

void _puts(char *str)
{
	while (*str != '\n')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
