#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 * @argc: argc
 * @argv: argv
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int FD_SOURCE, FD_DEST;
	ssize_t WRITE_VALUE, READ_VALUE;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	FD_SOURCE = open(argv[1], O_RDONLY);
	FD_DEST =  open(argv[2], O_CREAT | O_WRONLY | O_TRUNC , 0664);
	while ((READ_VALUE = read(FD_SOURCE, buf, 1024)) > 0)
	{
		WRITE_VALUE = write(FD_DEST, buf, READ_VALUE);
		if (READ_VALUE == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			close(FD_SOURCE);
			close(FD_DEST);
			exit(98);
		}
		if (WRITE_VALUE == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
			close(FD_SOURCE);
			close(FD_DEST);
			exit(99);
		}
	}
	if (close(FD_SOURCE) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",FD_SOURCE);
		exit(100);
	}
	if (close(FD_DEST) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",FD_DEST);
		exit(100);
	}
	return (0);
}
