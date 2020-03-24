#include "lists.h"
/**
 * reverse_listint - reverse the node order.
 * @head: head of the list
 * Return: the head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	prev = NULL;
	next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = (*head);
		*head = next;
	}
	*head = prev;

	return (*head);
}
