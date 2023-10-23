#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: pointer to the first element of the list
 * @index: the index of the node to be returned
 * Return: the node with the index given or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int i = 0;

	while (i < index)
	{
		current = current->next;
		i++;
	}
	if (current == NULL)
		return (NULL);

	return (current);
}
