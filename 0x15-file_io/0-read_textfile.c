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

	ssize_t nr, nw;

	char *buff;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);

	if (buff == NULL)
		return (0);

	nr = read(fd, buff, letters);

	if (nr == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}


	nw = write(STDOUT_FILENO, buff, nr);

	if (nw == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}

	close(fd);
	return (nr);

}
