#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: pointer to the beginning of the linked list
 * @str: string contained in the new node
 * Return: address of the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;

	return (new);
}

