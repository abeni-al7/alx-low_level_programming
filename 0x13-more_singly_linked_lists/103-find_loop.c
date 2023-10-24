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

	while (fast != NULL || fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			break;
		}
	}
	if (fast == NULL)
		return (NULL);

	return (slow);
}
