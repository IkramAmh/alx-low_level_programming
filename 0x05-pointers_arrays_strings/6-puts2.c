#include "main.h"

/**
 * puts - prints even numbers
 * @str: The number to be checked
 */

void puts2(char *str)
{
	int i;
	int len = 0;

	while (str != '\0')
	{
		len++;
	}
	for (i = 0; i <= len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
