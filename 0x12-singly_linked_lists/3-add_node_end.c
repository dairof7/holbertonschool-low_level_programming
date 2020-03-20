#include "lists.h"

int _strlen(const char *s);

/**
 * add_node_end - add node to the end of the list.
 * @str: string data
 * @head: head of list
 * Return: the list.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *add;
	list_t *temp = *head;

	add = malloc(sizeof(list_t));
	if (add == NULL)
		return (NULL);

	add->str = strdup(str);
	add->len = _strlen(str);
	add->next = NULL;

	if (*head == NULL)
	{
		*head = add;
		return (add);
	}
	while (temp->next !=  NULL)
		temp = temp->next;
	temp->next = add;

	return (add);
}
/**
 * _strlen - returns the length of a string
 * @s: char array pointer
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
