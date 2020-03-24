#include "lists.h"
/**
 * pop_listint - delete a head node.
 * @head: head of the list
 * Return: 0 if head is empty
 */
int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	temp = *head;
	n = (*head)->n;
	*head = (*head)->next;
	free(temp);

	return (n);
}
