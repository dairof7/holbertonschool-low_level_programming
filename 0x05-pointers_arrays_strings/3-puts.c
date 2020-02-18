#include "holberton.h"
/**
 * _puts - function that prints a string
 * @srt: char array pointer
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void _puts(char *str)
{
	int i;

	while(str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
