#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: pointer to the first element of the linked list
 */

void free_list(list_t *head)
{
	list_t *current = head;
	list_t *next_node;

	while (current->next != NULL)
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}

	free(current);
}
