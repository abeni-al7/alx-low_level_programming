#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to the first element of the list
 * Return: address of the node where the loop starts
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *fast = head;
	listint_t *meet = NULL;

	while (fast != NULL || fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			meet = slow;
			break;
		}
	}
	if (meet == NULL)
		return (NULL);

	while (meet != slow)
	{
		slow = slow->next;
		meet = meet->next;
	}

	return (meet);
}
