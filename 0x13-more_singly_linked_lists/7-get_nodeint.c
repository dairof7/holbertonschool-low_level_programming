#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: head of the list
 * @index: number of the node to get
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;

	if (head == NULL)
		return (0);

	for (n = 0; n < index ; n++)
	{
		if (head->next != NULL)
			head = head->next;
		else
			return (NULL);

	}
	return (head);
}
