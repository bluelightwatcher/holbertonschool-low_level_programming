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

	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		return (0);
	}

	write(fd, buffer, letters);
	if (write == -1)
	{
		return (0);
	}
return (write);
}

