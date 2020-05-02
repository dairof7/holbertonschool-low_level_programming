#include "lists.h"
/**
 * add_dnodeint_end - add a integer node to the end.
 * @head: head of the list
 * @n: info for the new node
 * Return: # of elements.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *add, *temp;

	temp = *head;
	add = malloc(sizeof(dlistint_t));
	if (add == NULL)
		return (NULL);
	add->n = n;
	add->next = NULL;
	if (*head == NULL)
	{
		add->prev = NULL;
		*head = add;
		return (add);
	}

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = add;
	add->prev = temp;
	return (add);
}
