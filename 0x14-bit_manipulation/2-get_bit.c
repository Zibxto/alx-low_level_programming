#include "main.h"

/**
 * get_bit -  returns the value of a bit at a given index
 * @n: decimal number
 * @index: index of bit to return
 * Return: bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int b;
	unsigned int max_b;

	max_b = (sizeof(unsigned long int) * 8);
	if (index > max_b)
		return (-1);

	b = ((n >> index) & 1);

	return (b);

}
