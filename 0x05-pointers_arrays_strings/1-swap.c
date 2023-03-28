#include "main.h"

/**
 * swap_int - swaps the values of 2 int
 * @a: param 1
 * @b: param 2
 */
void swap_int(int *a, int *b)
{
int tmp = *a;
*a = *b;
*b = tmp;
}
