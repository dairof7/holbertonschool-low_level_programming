#include "lists.h"
/**
 * sum_dlistint - sum all numbers.
 * @head: head of the list
 * Return: return the sum
 */
int sum_dlistint(dlistint_t *head)
{
		int suma = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		suma += head->n;
		head = head->next;
	}

	return (suma);
}
