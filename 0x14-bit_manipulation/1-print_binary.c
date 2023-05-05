#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: decimal number
 * Return: void
 */


void print_binary(unsigned long int n)
{
	unsigned long int ncopy = n;

	int len = 0;

	if (n == 0)
		_putchar('0');

	while (ncopy > 0)
	{
		len++;
		ncopy >>= 1;
	}
	len -= 1;

	while (len >= 0)
	{

	if ((n >> len) & 1)
		_putchar('1');

	else
		_putchar('0');

	len--;

	}

}
