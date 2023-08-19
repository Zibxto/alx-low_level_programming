#include "lists.h"

/**
 * get_dnodeint_at_index - get node at an index
 * @head: pointer to head
 * @index: index given
 * Return: pointer to node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (!head)
		return (NULL);

	/* loop through until index is found */
	while (index && head->next)
	{
		head = head->next;
		index -= 1;
	}
	if (index == 0)
		return (head);

	/* index out of range */
	return (NULL);
}
