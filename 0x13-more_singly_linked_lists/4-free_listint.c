#include "lists.h"
/**
 * free_listint - free the list.
 * @head: head of the list
 */
void free_listint(listint_t *head)
{
	listint_t *temp, *buff;

	temp = head;
	while (temp != NULL)
	{
		buff = temp->next;
		free(temp);
		temp = buff;
	}
}
