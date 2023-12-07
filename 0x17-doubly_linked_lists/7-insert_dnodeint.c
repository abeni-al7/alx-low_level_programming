#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to pointer to the first element of linked list
 * @idx: index at which new node is to be added
 * @n: data contained in the new node
 * Return: address of new node or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current = *h, *temp;
	unsigned int num = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->prev = NULL;
		new->next = *h;
		if (*h != NULL)
			(*h)->prev = new;
		*h = new;
		return (new);
	}
	while (current != NULL && num < idx - 1)
	{
		current = current->next;
		num++;
	}
	if (current == NULL)
	{
		free(new);
		return (NULL);
	}
	temp = current->next;
	current->next = new;
	new->prev = current;
	new->next = temp;
	if (temp != NULL)
		temp->prev = new;
	return (new);
}
