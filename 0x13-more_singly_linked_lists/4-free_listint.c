#include "lists.h"

/**
 * free_listint - frees a list
 * @head: pointer to the first node of the list
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	if (head == NULL)
		return;


	while (head != NULL)
	{

		ptr = head;
		head = head->next;

		free(ptr);
	}
}
