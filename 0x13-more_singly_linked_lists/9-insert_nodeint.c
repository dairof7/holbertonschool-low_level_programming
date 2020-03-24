#include "lists.h"
/**
 * insert_nodeint_at_index - add a integer node to the end.
 * @head: head of the list
 * @idx: the position of the new node
 * @n: the integer value of the new node
 * Return: the head of list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *ant, *new, *temp;

	if (*head == NULL)
		return (0);

	temp = *head;
	new = malloc(sizeof(listint_t));
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (*head);
	}

	for (i = 0; i < idx; i++)
	{
		ant = temp;
		temp = temp->next;
	}
	ant->next = new;
	new->next = temp;

	return (*head);
}
