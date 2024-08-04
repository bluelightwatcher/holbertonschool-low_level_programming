#include "main.h"

/**
 * read_textfile - function read and write n characters from file
 * @filename: is the pointed file
 * @letters: is the number of char to print
 * Return: numbers of char written or -1 on failure 
 */

ssize_t read_textfile(const char *filename, size_t letters)
{

	int fd;
	ssize_t count;
	char *buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		return (0);
	}


	/*edge case*/
	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		free(buffer);
		return (0);
	}

	count = read(fd, buffer, letters);
	if (count == -1)
	{
		free(buffer);
		return (0);
	}
	write(STDOUT_FILENO, buffer, count);

free(buffer);
close(fd);
return (count);
}
