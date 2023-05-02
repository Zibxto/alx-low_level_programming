#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * and returns the head node’s data (n)
 * @head: pointer to the head pointer
 * Return: head data
 */

int pop_listint(listint_t **head)
{

	listint_t *tmp;

	int d;

	if (*head == NULL)
	{
		return (0);
	}

		tmp = *head;

		d = tmp->n;

		*head = tmp->next;
		free(tmp);
		tmp = NULL;

		return (d);

}
