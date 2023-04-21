#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list args;

	unsigned int i = 0, j, c = 0;

	char *string;

	const char t_args[] = "cifs";

	va_start(args, format);
	while (format && format[i])
	{
		j = 0;

		while (t_args[j])
		{
			if (format[i] == t_args[j] && c)
			{
				printf(", ");
				break;
			}
			j++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(args, int));
			c  = 1;
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			c = 1;
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			c = 1;
			break;
		case 's':
			string = va_arg(args, char *);
			if (!string)
			{
				printf("(nil)");
				break;
			}
			printf("%s", string);
			c = 1;
			break;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
