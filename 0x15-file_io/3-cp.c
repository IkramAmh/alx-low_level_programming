#include "main.h"

#define Permissions (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
 * main - copies the content of a file to another file
 * @argc: the number of arguments
 * @argv: the arguments passed to the program
 * Return: Exit_success or exit with error.
 */

int main(int argc, char **argv)
{
	int fd_from = 0, fd_to = 0;
	ssize_t rd, wr;
	char buf[READ_BUF_SIZE];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fd_from = open(argv[1], O_RDONLY, Permissions);
	if (fd_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
	fd_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, Permissions);
	if (fd_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	rd = read(fd_from, buf, READ_BUF_SIZE);
	if (rd == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
	while (rd > 0)
		wr = write(fd_to, buf, READ_BUF_SIZE);
	if (wr == -1 || wr != rd)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	fd_from = close(fd_from);
	if (fd_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd%d\n", fd_from), exit(100);
	fd_to = close(fd_to);
	if (fd_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd%d\n", fd_from), exit(100);
	return (EXIT_SUCCESS);
}
