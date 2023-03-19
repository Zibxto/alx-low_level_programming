#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{

	char alphabet = 'a';
	char alpha = 'A';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}

	while (alpha <= 'Z')
	{
		putchar(alpha);
		alpha++;
	}

		putchar('\n');
		return (0);
}
