#include "lists.h"

/**
 * sum_listint - sums of all the data (n) of a listint_t linked list
 * @head: pointer to head node
 * Return: the sum
 */

int sum_listint(listint_t *head)
{

	int s = 0;

	while (head != NULL)
	{
		s += head->n;
		head = head->next;
	}

	return (s);

}
