#include "main.h"

/** _isalpha - checkes for letters
 * @c: is the character to be checked
 * Return: 1 if it's a letter 0 otherwise.
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90 && c >= 97 && c <= 122)
		return (1);
	return (0);
}
