#include "lists.h"
/**
 * delete_dnodeint_at_index - delete a node.
 * @head: head of the list
 * @index: the index of the node to delete
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *ant, *del;

	if (*head == NULL)
	{
		return (-1);
	}
	ant = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(ant);
		return (1);
	}

	for (i = 1; i < index; i++)
	{
		if (ant)
		{
			ant = ant->next;
		}
		else
			return (-1);
	}

	del = ant->next;
	ant->next = del->next;
	del->next->prev = ant;
	free(del);
	return (1);
}
