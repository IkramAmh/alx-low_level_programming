#include "main.h"

/**
 * puts - prints even numbers
 * @str: The number to be checked
 */

void puts2(char *str)
{
	int i, len = 0;

	while (str++)
	{
		len++;
	}
	for (i = 0; i <= len - 1; i++)
	{
		_putchar(str[0]);
		str[i] = *(str + 2);
		_putchar(str[i]);
	}
}
