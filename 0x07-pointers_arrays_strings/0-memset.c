#include "main.h"

/**
 * _memset - fills memory wth a constant byte
 * @s: memory area pointed to
 * @b: constant byte
 * @n: number of bytes
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{

	int size = n;

	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
		s[i] = b;
	}

	return (s);
}
