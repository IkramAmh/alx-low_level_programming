#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <unistd.h>

#define READ_BUF_SIZE 1024

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);

#endif
