#include "main.h"

/**
 * length - returns the length of a string
 * @s: the string to check
 * Return: the vqlue of length.
 */

int length(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}

/**
  * create_file - creates a file with rw------- permissions
  * @filename: name of the file, if NULL, return -1
  * @text_content: contents of the file. If NULL, create an empty file
  * Return: 1 on success, -1 on failure
  */

int create_file(const char *filename, char *text_content)
{
	int fp;
	ssize_t bytes = 0, len = length(text_content);

	if (!filename)
		return (-1);
	fp = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fp == -1)
		return (-1);
	if (len)
		bytes = write(fp, text_content, len);
	close(fp);
	return (bytes == len ? 1 : -1);
}
