#include "lists.h"

/**
 * add_dnodeint_end - add a new node at the end of a doubly linked list
 * @head: pointer to pointer to the first element of the linked list
 * @n: data to add to linked list
 * Return: address of new element or NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current = *head, *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if ((*head) == NULL)
	{
		new->next = NULL;
		new->prev = NULL;
		(*head) = new;
		return (new);
	}
	while (current->next != NULL)
		current = current->next;
	current->next = new;
	new->prev = current;
	new->next = NULL;
	return (new);
}
