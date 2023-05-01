#include <unistd.h>

/**
 * _putchar - outputs a character to stdout
 * @character: character value
 * Return: int
 */

int _putchar(char *character)
{
	return (write(1, &character, 1));
}
