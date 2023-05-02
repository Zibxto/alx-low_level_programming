#include "lists.h"

/**
 * listint_len - counts the number of elements in a list
 * @h: pointer to the first node
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		;
		h = h->next;

	}
	return (count);
}
