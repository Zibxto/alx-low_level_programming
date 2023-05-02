#include "lists.h"

/**
 * add_nodeint - adds a new node at the begining of a list
 * @head: pointer to the head pointer
 * @n: data of the new node
 * Return: the address of the newly added node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));

	ptr->n = n;
	ptr->next = *head;

	*head = ptr;

	return (ptr);
}
