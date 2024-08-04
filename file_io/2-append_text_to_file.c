#include "main.h"

/**
 * append_text_to_file - writes content at the end of the file
 * Description: Does not handle the null terminator properly
 * @filename: name of the file pointed at
 * @text_content: Null terminated string to append to file
 * Return: 1 on sucess -1 on faillure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int count;

	if (!filename)
	{
		return (-1);
	}

	fd = open(filename, O_APPEND | O_RDWR);
	if (fd < 0)
	{
		return (-1);
	}

	count = sizeof(char) * (strlen(text_content));

	if (!text_content)
	{
		return (-1);
	}

	write(fd, text_content, count);

	return (1);
}

