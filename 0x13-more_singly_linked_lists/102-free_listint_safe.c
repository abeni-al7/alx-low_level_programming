#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to pointer of the first element
 * Return: size of the list freed
 */

size_t free_listint_safe(listint_t **h)
{
	size_t num = 0;
	listint_t *slow = *h;
	listint_t *fast = *h;
	listint_t *temp;

	if (*h == NULL)
		return (0);
	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			while (fast->next != slow)
			{
				temp = fast->next;
				free(fast);
				fast = temp;
				num++;
			}
			free(fast);
			num++;
			return (num);
		}
	}

	while (slow != NULL)
	{
		temp = slow->next;
		free(slow);
		slow = temp;
		num++;
	}
	*h = NULL;

	return (num);
}
