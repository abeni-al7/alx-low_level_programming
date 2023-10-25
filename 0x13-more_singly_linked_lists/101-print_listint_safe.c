#include "lists.h"

/**
 * print_listint_safe - prints a linked list with the address
 * @head: pointer to the first element of the list
 * Return: number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0;
	const listint_t *slow, *fast;

	slow = head;
	fast = head;

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		printf("%d\n", slow->n);
		num++;

		if (slow == fast)
		{
			break;
		}
	}
	if (fast && fast->next)
	{
		slow = head;
		while (slow != fast)
		{
			printf("%d\n", slow->n);
			num++;
			slow = slow->next;
			fast = fast->next;
		}
	}

	else
	{
		while (head)
		{
			printf("%d\n", head->n);
			num++;
			head = head->next;
		}
	}

	return (num);
}
