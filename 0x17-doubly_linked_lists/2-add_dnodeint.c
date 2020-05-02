#include "lists.h"
/**
 * add_dnodeint - add a integer node at the beggining.
 * @head: head of the list
 * @n: info for the new node
 * Return: # of elements.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *add;
	dlistint_t *cur;

	cur = *head;
	add = malloc(sizeof(dlistint_t));
	if (add == NULL)
		return (NULL);
	add->n = n;

	if (cur == NULL)
	{
		*head = add;
		add->prev = NULL;
		add->next = NULL;
		return (add);
	}

	add->prev = NULL;
	add->next = *head;
	cur->prev = add;
	*head = add;
	return (add);
}
