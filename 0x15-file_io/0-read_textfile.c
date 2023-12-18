#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the posix
 * @filename: the name of the file to read
 * @letters: the number of letters to read
 * Return: the number of letters.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	ssize_t bytes;
	char buf[READ_BUF_SIZE * 8];

	if (!filename || ! letters)
		return (0);
	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	bytes = read(fp, &buf[0], letters);
	bytes = write(fp, &buf[0], letters);
	close(fp);
	return (bytes);
}
