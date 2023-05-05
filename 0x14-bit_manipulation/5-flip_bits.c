#include "main.h"

/**
 * flip_bits -  returns the number of bits you would need to
 * flip to get from one number to another.
 * @n: num 1
 * @m: num 2
 * Return: diff in bits
 */


unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

	unsigned int diff_b = 0;
	unsigned long int diff;

	diff = n ^ m;

	do {
		diff_b += (diff & 1);
		diff >>= 1;
	} while
		(diff > 0);

	return (diff_b);

}
