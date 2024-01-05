#include "main.h"

/**
  * main - entry point
  * @ac: argument count
  * @av: array of argument tokens
  * Return: 0 on success
  */

int main(int ac, char *av[])
{
	int fc_from, fc_to, rd_stat, wr_stat;
	mode_t permessions = S_IRUSR | S_IWUSR | S_IWGRP | S_IRGRP | S_IROTH;
	char buf[READ_BUF_SIZE];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fc_from = open(av[1], O_RDONLY);
	if (fc_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	fc_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, permessions);
	if (fc_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	rd_stat = 1;
	while (rd_stat)
	{
		rd_stat = read(fc_from, buf, READ_BUF_SIZE);
		if (rd_stat == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
		if (rd_stat > 0)
		{
			wr_stat = write(fc_to, buf, rd_stat);
			if ((wr_stat != rd_stat) || (wr_stat == -1))
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
		}
	}
	if (close(fc_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fc %d\n", fc_from), exit(100);
	if (close(fc_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fc %d\n", fc_to), exit(100);
	return (EXIT_SUCCESS);
}
