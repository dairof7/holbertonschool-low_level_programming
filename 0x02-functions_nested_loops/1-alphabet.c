#include "holberton.h"
/**
 * print_alphabet - check the code for Holberton School students.
 *
 * Return: Always 0.
 *
 *
 */
void print_alphabet(void)
{
	int i;

	for (i = 0; i <= 25; i++)
	{
		_putchar(i + 97);
	}
	_putchar('\n');
}
