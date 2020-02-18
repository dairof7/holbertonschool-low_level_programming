#include "holberton.h"
/**
 * puts2 - prints a string, in reverse
 * @str: char array pointer
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void puts2(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

