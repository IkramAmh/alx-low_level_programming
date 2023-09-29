#include "main.h"

int palength(char *s);
int strcomp(char *s, int i, int l);

/**
 * is_palindrome - returns if s is a palindrome
 * @s: the string to be checked
 * Return: 1 if true 0 otherwise.
 */

int is_palindrome(char *s)
{
	int l;

	l = palength(s);
	return (strcomp(s, 0, l));
}

/**
 * palength - measures the length of the string
 * @s: the string to be measured
 * Return: the length of the string.
 */

int palength(char *s)
{
	if (*s == 0)
	{
		return (0);
	}
	return (1 + palength(s + 1));
}

/**
 * strcomp - compares the characters of the string
 * @s: the string to check
 * @i: a counter
 * @l: the string's length
 * Return: 1 if true 0 otherwise.
 */

int strcomp(char *s, int i, int l)
{
	if (*(s + i) != *(s + (l - 1)))
	{
		return (0);
	}
	if (i > l / 2)
		return (1);
	return (strcomp(s, i + 1, l - 1));
}
