#include "lists.h"
/**
 * insert_dnodeint_at_index - add a integer node to the end.
 * @h: h of the list
 * @idx: the position of the new node
 * @n: the integer value of the new node
 * Return: the h of list
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *ant, *new, *temp;

	if (h == NULL)
		return (0);

	temp = *h;
	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	if (idx == 0)
	{
		new->next = *h;
		new->prev = NULL;
		*h = new;
		return (new);
	}

	for (i = 0; i < idx; i++)
	{
		if (temp)
		{
			ant = temp;
			temp = temp->next;
		}
		else
			return (NULL);
	}
	ant->next = new;
	new->prev = ant;
	new->next = temp;
	temp->prev = new;
	return (new);
}