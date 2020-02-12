#include <stdio.h>
#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int i, cont;

	for (i = 1; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			cont = cont + i;
		}
	}
	printf("%d\n", cont);
	return (0);
}
