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
 * add_node - adds a node to the beginning of the list
 * @head: pointer to a pointer param
 * @str: data to be added in the new node
 * Return: address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;

	ptr = malloc(sizeof(list_t));

	if (ptr != NULL)
	{
	ptr->str = strdup(str);
	ptr->len = _strlen(str);
	ptr->next = NULL;

	ptr->next = *head;
	*head = ptr;

	return (*head);
	}
	return (NULL);
}
