#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: pointer to the first element of the list
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = current->next;
		free(current);
	}
}
