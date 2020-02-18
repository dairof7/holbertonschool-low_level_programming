#include "holberton.h"
#include <stdio.h>
/**
 * puts_half - prints a string, in reverse
 * @str: char array pointer
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void puts_half(char *str)
{
	int i = 0, j, l;

	while (str[i] != '\0')
	{
		i++;
	}

	if (i % 1 == 0)
		l = i / 2;
	else
		l = (i - 1) / 2;

	for (j = l; j < i; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}

