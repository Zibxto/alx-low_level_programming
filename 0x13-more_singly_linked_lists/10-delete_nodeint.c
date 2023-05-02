#include "lists.h"

/**
 * delete_nodeint_at_index -  deletes the node at index of a linked list
 * @head: pointer to head node
 * @index: index of node to delete
 * Return: 1 if it succeeded, -1 if it failed
 */


int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	unsigned int i = 0;
	listint_t *tmp, *ptr;

	if (*head == NULL)
		return (-1);

	tmp = *head;

	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}

	while (i < (index - 1) && tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}

	if (i != (index - 1) || tmp->next == NULL)
		return (-1);

	ptr = tmp->next;
	tmp->next = (tmp->next)->next;
	free(ptr);

	return (1);

}
