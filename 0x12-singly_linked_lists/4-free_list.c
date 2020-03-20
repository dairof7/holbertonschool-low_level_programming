#include "lists.h"

/**
 * free_list - free the memory.
 * @head: head of list
 */
void free_list(list_t *head)
{
	list_t *temp, *buff;

	temp = head;
	while (temp != NULL)
	{
		buff = temp->next;
		free(temp->str);
		free(temp);
		temp = buff;
	}
}
