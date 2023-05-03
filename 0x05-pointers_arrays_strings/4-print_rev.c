#include "main.h"

/**
 * print_rev - puts string in reverse
 * @s: The string to be inputed
 */

void print_rev(char *s)
{
	int c;

	while (s[c] != '\0')
	{
		c++;
	}
	for (c -= 1; c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
