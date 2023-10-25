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
		printf("[%p] %d\n", (void *)slow, slow->n);
		num++;

		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			printf("-> [%p] %d\n", (void *)slow, slow->n);
			num++;
			break;
		}
	}

	if (!slow || !fast || !fast->next)
	{
		while (head)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			num++;
			head = head->next;
		}
	}

	return (num);
}
