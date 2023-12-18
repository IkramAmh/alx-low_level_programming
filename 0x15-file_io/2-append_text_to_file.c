#include "main.h"

/**
 * length - returns the length of a string
 * @s: the string to measure
 * Return: The value of the length.
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
 * append_text_to_file - add text to the file
 * @filename: the name of the file to extend
 * @text_content: the text to add
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fp;
	ssize_t bytes = 0, len = length(text_content);

	if (!filename)
		return (-1);
	fp = open(filename, O_WRONLY | O_APPEND);
	if (fp == -1)
		return (-1);
	if (len)
		bytes = write(fp, text_content, len);
	close(fp);
	return(bytes == len ? 1 : -1);
}
