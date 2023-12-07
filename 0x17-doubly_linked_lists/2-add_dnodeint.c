#include "lists.h"

/**
 * add_dnodeint - adds new node at the beginning of a linked list
 * @head: pointer to pointer to the first element of linked list
 * @n: data to be added
 * Return: address of the new element or NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	if ((*head) != NULL)
		(*head)->prev = new;
	new->next = (*head);
	(*head) = new;
	new->prev = NULL;

	return (new);
}
