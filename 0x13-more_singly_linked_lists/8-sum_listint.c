#include "lists.h"

/**
 * sum_listint - returns the sum of all the data in a linked list
 * @head: pointer to the first element of linked list
 * Return: the sum of all the data in linked list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
