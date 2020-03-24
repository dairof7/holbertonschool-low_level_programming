#include "lists.h"
/**
 * free_listint2 - free the list and Null the head.
 * @head: head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *buff;

	if (head == NULL)
		return (0);

	temp = *head;
	while (temp != NULL)
	{
		buff = temp->next;
		free(temp);
		temp = buff;
	}
	*head = NULL;
}
