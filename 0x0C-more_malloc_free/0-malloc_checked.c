#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked -  allocates memory using malloc
 * @b: size of memory
 * Return: void
 */

void *malloc_checked(unsigned int b)
{

	int *ptr;

	ptr = malloc(b * sizeof(int));
	if (ptr == NULL)
		exit(98);

	return (ptr);

}
