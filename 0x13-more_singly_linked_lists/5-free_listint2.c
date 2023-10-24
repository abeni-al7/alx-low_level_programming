#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to pointer of the first element of linked list
 */

void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *next;

	if (*head == NULL || head == NULL)
		return;
	current = *head;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*head = NULL;
}
