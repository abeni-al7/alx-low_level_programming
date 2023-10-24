#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to pointer of the first element
 * Return: size of the list freed
 */

size_t free_listint_safe(listint_t **h)
{
	size_t num = 0;
	listint_t *current = *h;
	listint_t *temp;

	if (*h == NULL)
		return (0);
	while (current != NULL)
	{
		temp = current->next;
		free(current);
		current = temp;
		num++;
	}
	*h = NULL;

	return (num);
}
