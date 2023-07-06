#include <stdio.h>
#include "main.h"

/**
 * str_len - counts string length
 * @s: the string to be counted
 * Return: always succesful
 */

int str_len(char *s)
{
	if (*s)
	{
		s++;
		return (1 + is_palindrome(s));
	}
	return (0);
}
/**
 * test - tester function
 * @s: The string to be tested
 * @len: the string length
 * @i: counter
 * Return: 1 if a true 0 otherwise
 */

int test(char *s, int len, int i)
{
	if (i >= len)
	{
		return (1);
	}
	if (s[len] == s[i])
	{
		return (test(s, len - 1, i));
	}
	return (0);
}
/**
 * is_palindrome - testes if a string is a palindrome
 * @s: The string to be tested
 * Return: 1 if a true 0 otherwise
 */

int is_palindrome(char *s)
{
	int len = str_len(s);
	int i = 0;

	return (test(s, len - 1, i));
}
