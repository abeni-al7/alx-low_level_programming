#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list and returns its data
 * @head: pointer to pointer of the first element of the list
 * Return: the data contained in the head node
 */

int pop_listint(listint_t **head)
{
	listint_t *current = *head;
	int data;

	if (*head == NULL)
		return (0);
	data = current->n;
	*head = current->next;
	free(current);

	return (data);
}
