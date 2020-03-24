#include "lists.h"
/**
 * add_nodeint_end - add a integer node to the end.
 * @head: head of the list
 * @n: info for the new node
 * Return: # of elements.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp;

	temp = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new;
	return (new);
}
