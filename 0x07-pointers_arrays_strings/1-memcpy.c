#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: copies to
 * @src: copies from
 * @n: memory number of bytes
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{

	if (n > 0)
	{
	unsigned int i;

	for (i = 0; i <= n; i++)
	{
		dest[i] = src[i];
	}

	}

	return (dest);

}

