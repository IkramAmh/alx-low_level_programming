#include "main.h"

/**
 * read_textfile - reads a file and returns the number of bytes
 * @filename: the name of the file to read
 * @letters: the number of letters to read
 * Return: The numbre of bytes or 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = open(filename, O_RDONLY);
	ssize_t count;
	char buf[READ_BUF_SIZE * 8];

	if (fd == -1)
		return (0);
	if (!filename || !letters)
		return (0);
	count = read(fd, &buf[0], letters);
	count = write(STDOUT_FILENO, &buf[0], count);
	if (count == -1)
		return (0);
	close(fd);
	return (count);
}

