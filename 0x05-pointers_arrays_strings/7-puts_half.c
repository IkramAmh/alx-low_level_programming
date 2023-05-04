#include "main.h"

/**
 * puts_half - prints the seconf half of a string
 * @str: The string to be printed
 */

void puts_half(char *str)
{
	int i;
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	if ((len - 1) % 2 != 0)
	{
		for (i = ((len - 1) / 2) + 1; i <= len - 1; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = ((len - 1) / 2) + 1; i <= len - 1; i++)
                {
                        _putchar(str[i]);
		}
	}
	_putchar('\n');
}
