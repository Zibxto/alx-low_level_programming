#include "lists.h"

/**
 * _strlen - counts the length of a string
 * @string: string to check
 * Return: the string length
 */

int _strlen(const char *string)
{

	int i;

	for (i = 0; string[i] != '\0'; i++)
	{
		;
	}
		return (i);
}


/**
 * add_node_end - adds a node to the beginning of the list
 * @head: pointer to a pointer param
 * @str: data to be added in the new node
 * Return: address of new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *tmp;

	if (str == NULL)
		return (NULL);
	if (strdup(str) == NULL)
		return (NULL);

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);

	ptr->str = strdup(str);
	ptr->len = _strlen(str);
	ptr->next = NULL;

	if (*head == NULL)
		*head = ptr;
	else
	{
		tmp = *head;

		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = ptr;
	}

	return (tmp);
}
