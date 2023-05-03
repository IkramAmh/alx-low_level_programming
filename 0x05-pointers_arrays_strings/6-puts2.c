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
	for (i = 0; i <= len; i++)
	{
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			_putchar(str[i + 2]);
		}
	}
}
