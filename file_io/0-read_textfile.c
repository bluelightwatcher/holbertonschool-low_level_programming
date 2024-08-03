#include "main.h"


ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}

	int fd;
	ssize_t count;

	/*edge case*/
	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, 003);
	if (fd < 0)
	{
		return (0);
	}

	count = read(fd, buffer, letters);
	if (count == -1)
	{
		return (0);
	}
return (count);
}

