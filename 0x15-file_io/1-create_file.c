#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: file text content
 * Return: 1 on success, -1 on failure
 */


int create_file(const char *filename, char *text_content)
{

	int fd;

	int n;

	int len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
	{
		close(fd);
		return (1);
	}

	/* get the length of text_content*/

	while (text_content[0] != '\0')
	{
		;
		len++;
	}

	n = write(fd, &text_content, len);
	if (n == -1)
		return (-1);

	close(fd);
	return (1);
}
