#include "lists.h"

/**
 * print_listint - prints all elements of a linked list
 * @h: pointer to the first element of the list
 * Return: the number of nodes in the list
 */

size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		node_count++;
		h = h->next;
	}
	return (node_count);
}

