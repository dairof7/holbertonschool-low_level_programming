#include "holberton.h"
/**
 * print_diagonal - function that draws a diagonal line on the terminal..
 * @n: integer number
 * Return: Always 0.
 *
 */
void spaces(int n);
void print_diagonal(int n)
{
	int j;

		for (j = 0; j < n; j++)
		{
			spaces(j);
		}

	if (n <= 0)
		_putchar('\n');
}

/**
 * spaces - introduce n spaces
 * @n: number of spaces
 */
void spaces(int n)
{
	int i;

	if (n >= 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
