#include "lists.h"
/**
 * print_listint - prints all the integers of a list.
 * @h: the list
 * Return: # of elements.
 */
size_t print_listint(const listint_t *h)
{
	unsigned long len = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		len++;
		h = h->next;
	}

	return (len);
}
