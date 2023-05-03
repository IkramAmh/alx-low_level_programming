#include "main.h"

/**
 * rev_string - reverses strings
 * @s: The string to be reversed
 */

void rev_string(char *s)
{
	int c = 0, len = 0;
	char n;

	while (s[c++])
	{
		len++;
	}
	for (c = len - 1; c >= len / 2; c--)
	{
		n = s[c];
		s[c] = s[len - c - 1];
		s[len - c - 1] = n;
	}
}
