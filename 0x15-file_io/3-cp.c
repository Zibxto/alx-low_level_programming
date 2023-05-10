#include "main.h"

/**
 * __exit - prints err msg and exit with appropriate exit value
 * @err: num is either exit value or fd
 * @s: string is a name, either of the two filenames
 * @fd: file descriptor
 * Return: on success, return 0
 **/
int __exit(int err, char *s, int fd)
{
	switch (err)
	{
	case 97:
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(err);
	case 98:
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", s);
		exit(err);
	case 99:
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", s);
		exit(err);
	case 100:
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(err);
	default:
		return (0);
	}
}

/**
 * main - copies from one file to another file
 * @argc: should be 3
 * @argv: first is file to copy from (fd1), second is file to copy to (fd2)
 * Return: on success return 0, 97-100 (exit value errors)
 */
int main(int argc, char *argv[])
{
	int fd1, fd2, nread, nwrote;
	char *buffer[1024];

	if (argc != 3)
		__exit(97, NULL, 0);

	fd2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd2 == -1)
		__exit(99, argv[2], 0);

	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
		__exit(98, argv[1], 0);

	while ((nread = read(fd1, buffer, 1024)) != 0)
	{
		if (nread == -1)
			__exit(98, argv[1], 0);

		nwrote = write(fd2, buffer, nread);
		if (nwrote == -1)
			__exit(99, argv[2], 0);
	}

	close(fd2) == -1 ? (__exit(100, NULL, fd2)) : close(fd2);
	close(fd1) == -1 ? (__exit(100, NULL, fd1)) : close(fd1);
	return (0);
}
