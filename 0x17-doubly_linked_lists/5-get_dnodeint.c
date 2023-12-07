#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a doubly linked list
 * @head: pointer to the first element of linked list
 * @index: index of the element to return
 * Return: the node pointed to by index in linked list or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int num = 0;

	while (head != NULL && num < index)
	{
		head = head->next;
		num++;
	}
	if (head == NULL)
		return (NULL);
	return (head);
}
