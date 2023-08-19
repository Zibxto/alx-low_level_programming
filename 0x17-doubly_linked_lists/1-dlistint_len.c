#include "lists.h"

/**
 * dlistint_len - returns the number of elments in a linked list
 * @h: head pointer
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;
	const dlistint_t *ptr = h;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		i++;
	}

	return (i);
}
