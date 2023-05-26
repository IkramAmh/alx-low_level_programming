#include "main.h"

/**
 * _puts - inputs strings
 * @str: The string to be inputed
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
