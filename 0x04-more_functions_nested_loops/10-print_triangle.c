#include "holberton.h"
/**
 * print_triangle - function that draws a diagonal line on the terminal..
 * Return: Always 0.
 * @j: number of #
 * @n: size of triangle
 */
void triangle(int j, int n);
void print_triangle(int size)
{
	int j;

		for (j = 0; j < size; j++)
		{
			triangle((size - j), size);
		}
	if (size <= 0)
		_putchar('\n');
}
/**
 * triangle - introduce n spaces
 * @j: # of #
 * @n: size
 */
void triangle(int j, int n)
{
	int i;

	if (n >= 0)
	{
		for (i = 0; i < j - 1; i++)
		{
			_putchar(' ');
		}
		for (i = j; i <= n; i++)
		_putchar('#');
		_putchar('\n');
	}
}
