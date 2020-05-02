#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - prints all the elements of a list_t list.
 * @h: the list
 * Return: # of elements.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
