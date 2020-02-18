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
	int i, j;

	while (str[i] != '\0')
	{
		i++;
	}
	for (j = i / 2; j < i; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}

