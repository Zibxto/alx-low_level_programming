#include "lists.h"

/**
 * reverse_list - reverses a listint_t linked list
 * @head: pointer to head pointer
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{

	listint_t *p, *n, *ptr;

	if (head == NULL || *head == NULL)
		return (NULL);
	
	p = NULL;

	ptr = *head;
	while (ptr != NULL)
	{
		n = (int*)ptr->n;
		ptr->n = p;
		p = ptr;
		ptr = n;
	}
	ptr = p;

	return ptr;

}
