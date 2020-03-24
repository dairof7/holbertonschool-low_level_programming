#include "lists.h"
/**
 * pop_listint - delete a head node.
 * @head: head of the list
 */
int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *temp;

	temp = *head;
	if (*head == NULL)
		return (0);
	n = (*head)->n;
	*head = (*head)->next;
	free(temp);

	return (n);
}
