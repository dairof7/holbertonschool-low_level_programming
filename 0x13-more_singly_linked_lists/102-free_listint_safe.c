#include "lists.h"
/**
 * free_listint_safe - free safe list.
 * @h: head of the list
 * Return: size of list
 */
size_t free_listint_safe(listint_t **h)
{
	unsigned long len = 0;
	listint_t *temp = *h;

	if (h == NULL)
		return (0);

	if (*h == NULL)
		return (0);

	while (*h != NULL)
	{
		*h = (*h)->next;
		len++;
		free(temp);

		if (*h >= temp)
		{
			*h = NULL;
			return (len);
		}
		temp = *h;
	}

	return (len);
}
