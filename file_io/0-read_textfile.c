#include "main.h"


ssize_t read_textfile(const char *filename, size_t letters)
{
	char buffer[letters];
	int fd;

	/*edge case*/
	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename);
	if (fd < 0)
	{
		return (0);
	}

	write(fd, buffer, letters);
	if (write != 0)
	{
		return (0);
	}
return (write);
}

