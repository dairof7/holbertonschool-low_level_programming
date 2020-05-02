
#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list.
 * @h: the list
 * Return: # of elements.
 */
size_t print_list(const list_t *h)
{
	unsigned long n = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", h->len, "(nil)");
		}
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		n++;
	}
	return (n);
}


