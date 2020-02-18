#include "holberton.h"
/**
 * print_rev - prints a string, in reverse
 * @s: char array pointer
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_rev(char *s)
{
	int i, j;

	while (s[i] != '\0')
	{
		i++;
	}
	for (j = 0; j <= i; j++)
	{
		_putchar(s[i - j]);
	}
	_putchar('\n');
}


