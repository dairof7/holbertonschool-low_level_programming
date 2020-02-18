#include "holberton.h"
#include <stdio.h>
/**
 * rev_string - reverses a string
 * @s: char array pointer
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void rev_string(char *s)
{
int i = 0, j;

	while (s[i] != '\0')
	{
		i++;
	}
	char b[i];

	for (j = 0; j <= i - 1; j++)
	{
		b[j] = s[i - 1 - j];
	}
	for (j = 0; j <= i - 1; j++)
		s[j] = b[j];
}
