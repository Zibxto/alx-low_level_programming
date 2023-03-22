#include "main.h"

/**
 * print_alphabet_x10 -  prints 10 times the alphabet in lowercase
 * Return - 0
 */
void print_alphabet_x10(void)
{

	char alpha;

	int times;

	for (times = 1; times <= 10; times++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
		_putchar(alpha);
		}

		_putchar('\n');
	}




}


