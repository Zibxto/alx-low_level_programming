#include "lists.h"

/**
 * sum_dlistint - get sum of all data in a list
 * @head: pointer to head
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (sum);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
