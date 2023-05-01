#include "lists.h"

/**
 * list_len - returns the number of elements of a list_t list
 * @h: pointer parameter
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	int count = 0;


	while (h != NULL)
	{

		if (h->str == NULL)
			printf("[0] (nil)\n");

		count++;
		h = h->next;
	}

	return (count);
}
