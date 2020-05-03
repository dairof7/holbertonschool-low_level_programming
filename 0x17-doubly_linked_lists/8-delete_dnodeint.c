#include "lists.h"
/**
 * delete_dnodeint_at_index - delete a node.
 * @head: head of the list
 * @index: the index of the node to delete
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *del = NULL;

	if (head == NULL)
		return (-1);
	del = *head;

	for (i = 0; i < index && del != NULL; i++)
		del = del->next;

	if (index - i == 0 && del != NULL)
	{
		if (del->next != NULL)
			del->next->prev = del->prev;
		if (del->prev != NULL)
			del->prev->next = del->next;
		if (del == *head)
			*head = del->next;
		free(del);
		return (1);
	}

	return (-1);
}
