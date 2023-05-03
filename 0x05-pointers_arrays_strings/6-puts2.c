#include "main.h"

/**
 * puts - prints even numbers
 * @str: The number to be checked
 */

void puts2(char *str)
{
	int i, len;
	while (str++)
		len++;
	for (i = 0; i <= len; i++)
	{
		if (str[i] % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
}
