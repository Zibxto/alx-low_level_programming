#include "main.h"

/**
 * print_line - prints a straight line
 * @n: argument _
 */

void print_line(int n)
{

int b = 0;

while (b < n)
{

if (n <= 0)
{
_putchar('\n');
}

else
{
_putchar('_');
}
b++;
}

_putchar('\n');

}
