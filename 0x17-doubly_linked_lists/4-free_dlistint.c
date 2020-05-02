#include "lists.h"
/**
 * free_dlistint - free the list.
 * @head: head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp, *buff;

	temp = head;
	while (temp != NULL)
	{
		buff = temp->next;
		free(temp);
		temp = buff;
	}
}
