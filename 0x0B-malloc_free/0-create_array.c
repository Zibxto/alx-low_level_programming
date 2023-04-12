#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: value passed in array
 * Return: arra of chary
 */

char *create_array(unsigned int size, char c)
{

	char *ptr;
	int i;

	ptr = malloc(sizeof(char) * size);
	
	if (ptr == NULL)
		return (NULL);

	if (size == 0)
		return (NULL);


	for (i = 0; i < (int)size; i++)
		ptr[i] = c;

	return (ptr);

}
