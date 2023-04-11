#include "main.h"

/**
 * _isupper - takes and argument and print if the number is uppercase or not
 * @c: argument to be checked
 * Return: 1 if c is uppers, otherwise return 0
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
