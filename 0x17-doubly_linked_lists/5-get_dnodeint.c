#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: head of the list
 * @index: number of the node to get
 * Return: the head, and zero when head is NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
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
