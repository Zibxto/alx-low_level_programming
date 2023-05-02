#include "lists.h"

/**
 * get_nodeint_at_index -  returns the nth node of a listint_t linked list
 * @head: pointer to head node
 * @index: index of nth node to be returned
 * Return: nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	while ((count < index) && head != NULL)
	{
		head = head->next;
		count++;
	}

	if (count == index)
		return (head);

	return (NULL);

}
