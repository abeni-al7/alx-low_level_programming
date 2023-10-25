#include "lists.h"

/**
 * print_listint_safe - prints a linked list with the address
 * @head: pointer to the first element of the list
 * Return: number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0;
	const listint_t *visited[100];
	size_t i;

	while (head != NULL)
	{
		for (i = 0; i < num; i++)
		{
			if (head == visited[i])
			{
				printf("-> %d\n", head->n);
				continue;
			}
		}
		if (num >= 100)
			return (num);
		visited[num] = head;
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		num++;
	}

	return (num);
}
