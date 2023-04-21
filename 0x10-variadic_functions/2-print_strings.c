#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_strings - print strings
 * @separator: separates strings
 * @n: number of strings to be printed
 */


void print_strings(const char *separator, const unsigned int n, ...)
{

	int i;

	va_list args;

	char *string;

	va_start(args, n);

	for (i = 0; i < (int)n; i++)
	{

		string = va_arg(args, char *);
		if (string == NULL)
		{
			printf("(nil)");
		}

		else
		{

		printf("%s", string);
		}

		if (i != (int)(n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(args);

	printf("\n");

}
