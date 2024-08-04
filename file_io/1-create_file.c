#include "main.h"

/**
 * create_file - creates a file and writes into it
 * @filename: is a pointer to the file
 * @text_content: is the string to write
 * Return: 1 on success -1 on faillure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int result;


	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		result = write(fd, filename, strlen(text_content));
		if (result == -1)
		{
			close(fd);
			return (-1);
		}

	}

	close(fd);
	return (1);
}
