#include "lists.h"

/**
 * sum_dlistint - returns the sum of all data in doubly linked list
 * @head: pointer to the first element of linked list
 * Return: sum of all data in linked list or 0
 */

int sum_dlistint(dlistint *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
