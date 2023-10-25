#include "lists.h"

/**
 * print_list - print a linked list
 * @head: pointer to the first element of the list
 * Return: number of nodes printed
 */

size_t print_list(const listint_t *head)
{
	size_t num = 0;
	const listint_t *current;

	current = head;
	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		num++;
		current = current->next;
	}

	return (num);
}

/**
 * print_list_in_loop - print the list if there is a loop
 * @head: pointer to the first element of the list
 * @loop: address of the loop
 * Return: number of nodes printed
 */

size_t print_list_in_loop(const listint_t *head, const listint_t *loop)
{
	size_t num = 0;
	const listint_t *current;

	current = head;
	while (current != loop)
	{
		printf("[%p] %d\n", (const void *)current, current->n);
		num++;
		current = current->next;
	}
	printf("-> [%p] %d\n", (void *)current, current->n);
	num++;

	return (num);
}

/**
 * find_loop_start - finds the start of a loop in a linked list
 * @head: pointer to the first element of linked list
 * @meet: meeting point of head with the loop
 * Return: the location of the loop
 */

const listint_t *find_loop_start(const listint_t *head, const listint_t *meet)
{
	const listint_t *start;

	start = head;
	while (start != meet)
	{
		start = start->next;
		meet = meet->next;
	}

	return (start);
}

/**
 * print_listint_safe - prints a linked list with the address
 * @head: pointer to the first element of the list
 * Return: number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0;
	const listint_t *slow, *fast, *loop;

	if (head == NULL)
		exit(98);

	slow = fast = head;
	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			loop = find_loop_start(head, slow);
			break;
		}
	}
	if (loop)
		num = print_list_in_loop(head, loop);
	else
		num = print_list(head);

	return (num);
}
