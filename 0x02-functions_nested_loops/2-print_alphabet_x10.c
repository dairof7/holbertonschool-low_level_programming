#include "holberton.h"
/**
 * print_alphabet - check the code for Holberton School students.
 *
 * Return: Always 0.
 *
 *
 */

void print_alphabet_x10(void)
{
	for (int i = 0; i < 10; i++)
	{
		for (int j  = 0; j < 24; j++)
		{
			_putchar(j + 97);
		}
		_putchar('\n');
	}
}
