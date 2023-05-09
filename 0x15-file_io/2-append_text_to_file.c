#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file to work on
 * @text_content: text to append
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{

	int fd;

	int len = 0;

	int n;

	if (!filename)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);

	if (fd == -1)
		return (-1);

	if (!text_content)
	{
		;
	}

	while (text_content[len] != '\0')
	{
		;
		len++;
	}

	n = write(fd, text_content, len);
	if (n == -1)
		return (-1);

	close(fd);
	return (1);

}
