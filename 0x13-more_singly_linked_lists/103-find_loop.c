#include "lists.h"

/**
 * find_listint_loop -  finds the loop in a linked list
 * @head: pointer to head node
 * Return: the address of the node where the loop starts
 */


listint_t *find_listint_loop(listint_t *head)
{

	listint_t *t, *h;

	t = h = head;

	while (t != NULL && h != NULL)
	{
		t = t->next;
		h = h->next->next;

		if (t == h)
		{
			t = head;
			while (t != h)
			{
				t = t->next;
				h = h->next;
			}
			return (t);
		}
	}

	return (NULL);

}
