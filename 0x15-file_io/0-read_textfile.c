#include "main.h"

/**
 * read_textfile - reads a text file and prints
 * it to the POSIX standard output.
 * @filename: file to read
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print
 */


ssize_t read_textfile(const char *filename, size_t letters)
{

	int fd;

	int n;

	ssize_t i = 0;

	char buff[1024];

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDWR);

	n = read(fd, buff, letters);

	while (buff[i] != '\0')
	{
		printf("%c", buff[i]);
		i++;
	}

	if (n == -1)
	{
		return (0);
	}


	return (i);

}
