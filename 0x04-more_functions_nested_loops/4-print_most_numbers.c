#include "holberton.h"
/**
 * print_most_numbers - print the numbers 0 to 9 without 2 and 3
 *
 * Return: Always 0.
 *
 *
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (!(i == 2 || i == 4))
		_putchar(i + '0');
	}
	_putchar('\n');
}
