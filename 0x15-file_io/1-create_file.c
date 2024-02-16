#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: the string
 * Return: the length.
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
 * create_file - creates a file
 * @filename: the name of the file to create
 * @text_content: the text to add
 * Return: 1 on success -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t wr, len = _strlen(text_content);

	if (!filename)
		return (-1);
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (len)
		wr = write(fd, text_content, len);
	close(fd);
	return (wr == len ? 1 : -1);
}
