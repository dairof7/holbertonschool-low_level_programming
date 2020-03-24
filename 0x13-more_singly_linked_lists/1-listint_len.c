#include "lists.h"
/**
 * listint_len - return the len of list.
 * @h: the list
 * Return: # of elements.
 */
size_t listint_len(const listint_t *h)
{
	unsigned long len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}

	return (len);
}
