#include "lists.h"

/**
 * dlistint_len - returns number of elements in a linked list
 * @h: pointer to the first element of linked list
 * Return: number of elements in linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
