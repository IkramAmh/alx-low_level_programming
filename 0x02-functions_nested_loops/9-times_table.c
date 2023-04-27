#include "main.h"

/**
 * times_table - prints the nine times
 * table
 */

void times_table(void)
{
	int i, j, x;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			x = i * j;
			if (x <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((x / 10) + '0');
			}
			_putchar((x % 10) + '0');
			_putchar(',');
			_putchar(' ');
		}
		if (j == 9)
		{
			x = i * j;
			if (x <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((x / 10) + '0');
			}
			_putchar((x % 10) + '0');
		}
		_putchar('\n');
	}
}
