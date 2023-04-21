#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: string parameter that separates numbers
 * @n: number of digits
 * Return: nothing
 */


void print_numbers(const char *separator, const unsigned int n, ...)
{

	int i;

	va_list args;

	if (separator == NULL)
		exit(1);

	va_start(args, n);

	for (i = 0; i < (int)n; i++)
	{
		printf("%d", va_arg(args, int));

		if (i != (int)(n - 1))
			printf("%s", separator);

	}

	va_end(args);

	printf("\n");
}
