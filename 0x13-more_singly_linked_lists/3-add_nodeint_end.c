#include "lists.h"

/**
 * add_nodeint_end - adds a node to the end of a list
 * @head: pointer to the head pointer
 * @n: data to passed into the node
 * Return: address of the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *ptr, *tmp;

	tmp = malloc(sizeof(listint_t));

	if (tmp == NULL)
		return (NULL);

	tmp->n = n;
	tmp->next = NULL;


	if (*head == NULL)
		*head = tmp;
	else
	{

	ptr = *head;

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}

	ptr->next = tmp;

	}
	return (tmp);
}
