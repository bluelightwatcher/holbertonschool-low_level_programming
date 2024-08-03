#ifndef FILEIO
#define FILEIO

#include <stdlib.h>
#include <unistd>
#include <fcntl.h>
#include <stddef.h>

ssize_t read_textfile(const char *filename, size_t letters);
int _putchar(char c);

#endif
