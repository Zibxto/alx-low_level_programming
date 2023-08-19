#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a list
 * @head: array of pointers for next and prev
 * @n: data of the node
 * Return: address of the new element or NULL if it fails
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{

	dlistint_t *new_node, *last_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	/* for an empty linked list */
	if (*head == NULL)
	{
		*head = new_node;
		new_node->next = NULL;
		new_node->prev = NULL;
		return (new_node);
	}

	/* for a non empty linked ist */
	last_node = *head;

	while (last_node->next != NULL)
		last_node = last_node->next;
	new_node->next = NULL;
	new_node->prev = last_node;
	last_node->next = new_node;

	return (new_node);
}
