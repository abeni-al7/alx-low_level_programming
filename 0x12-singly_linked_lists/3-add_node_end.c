#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: pointer to the beginning of a linked list
 * @str: string contained in the new node
 * Return: address of the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current = *head;
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		while (current->next != NULL)
			current = current->next;
	current->next = new;
	}

	return (new);
}
