#include "main.h"

/**
 * _abs - calculate the absolute value
 * of an integer
 * @int: the number we ask its absolute value
 * Return: The absolute value of int.
 */

int _abs(int c)
{	
	int abs_c;

	if (c < 0)
	{
		abs_c = c * -1;
		return (abs_c);
	}
	else
	{	
		return (c);
	}
}

	
