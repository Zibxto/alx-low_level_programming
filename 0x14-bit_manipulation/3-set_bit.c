#include "main.h"

/**
 * set_bit -  returns the value of a bit at a given index
 * @n: decimal number
 * @index: index of bit to return
 * Return: 1 if success or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int m = 1;
	unsigned int max_b;

	max_b = (sizeof(unsigned long int) * 8);
	if (index > max_b)
		return (-1);

	m <<= index;
	*n = (*n | m);

	return (1);
}
