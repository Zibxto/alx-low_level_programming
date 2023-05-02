

#include "lists.h"

/**
 * print_listint - prints the elements of a list
 * @h: pointer to the first element of the list
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;

	if (h == NULL)
		printf("List is empty");

	while (h != NULL)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (count);
}
