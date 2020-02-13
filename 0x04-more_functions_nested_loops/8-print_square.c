#include "holberton.h"
/**
 * print_square - function that draws a diagonal line on the terminal..
 * @n: size of square
 * Return: Always 0.
 *
 */
void squares(int n);
void print_square(int size)
{
	int j;

		for (j = 0; j < size; j++)
		{
			squares(size);
		}

	if (size <= 0)
		_putchar('\n');
}

/**
 * squares - introduce n spaces
 * @n: number of spaces
 */
void squares(int n)
{
	int i;

	if (n >= 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
