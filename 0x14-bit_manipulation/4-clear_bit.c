#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: decimal number
 * @index: index of bit
 * Return: 1 if success or -1 if error
*/


int clear_bit(unsigned long int *n, unsigned int index)
{

	unsigned long int max_b;
	unsigned long int m = 1;

	max_b = (sizeof(unsigned long int) * 8);
	if (index > max_b)
		return (-1);

	m = ~(m << index);
	*n = (*n & m);

	return (1);

}
