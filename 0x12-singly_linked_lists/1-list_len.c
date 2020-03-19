#include <stdio.h>
#include "lists.h"
/**
 * list_len - prints all the elements of a list_t list.
 * @h: the list
 * Return: # of elements.
 */
size_t list_len(const list_t *h)
{
	unsigned long n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
