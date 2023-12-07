#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a specified position
 * @head: pointer to pointer to the first element of linked list
 * @index: index at which node should be deleted
 * Return: 1 or -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head, *temp;
	unsigned int num = 0;

	if ((*head) == NULL)
		return (-1);
	if (index == 0)
	{
		if ((*head)->next != NULL)
		{
			(*head)->next->prev = NULL;
			temp = (*head)->next;
			free(*head);
			*head = temp;
			return (1);
		}
		else
		{
			free(*head);
			*head = NULL;
			return (1);
		}
	}
	while (current != NULL && num < index)
	{
		current = current->next;
		num++;
	}
	if (current == NULL)
		return (-1);
	current->prev->next = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;
	free(current);
	return (1);
}
