#include "main.h"

/**
 * _strlen -  measures the length of a string
 * @s: the string to measure
 * Return: the length or 0.
 */

ssize_t _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}

/**
 * append_text_to_file - adds text to a file
 * @filename: the name of the file to extend
 * @text_content: the text to add
 * Return: 1 on success and -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t wr = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	while (len)
		wr = write(fd, text_content, len);
	if (wr == -1)
		return (-1);
	close(fd);
	return (wr == len ? 1 : -1);
}
