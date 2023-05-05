#include <unistd.h>

int _putchar(char b)
{
	return (write(1, &b, 1));
}
