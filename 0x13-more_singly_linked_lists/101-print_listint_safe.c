#include "lists.h"
/**
 * print_listint_safe - print safe.
 * @head: head of the list
 * Return: size of list
 */
size_t print_listint_safe(const listint_t *head)
{
	unsigned long len = 0;

	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		len++;

		if (head > head->next)
			head = head->next;
		else
		{
			head = head->next;
			printf("-> [%p] %d\n", (void *)head, head->n);
			break;
		}
	}

	return (len);
}
