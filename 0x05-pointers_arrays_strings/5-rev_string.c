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
int i = 0, j, l;
char b;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;

	if (i % 2 == 0)
		l = i / 2;
	else
		l = (i / 2) + 1;
	for (j = 0; j < l; j++)
	{
		b = s[i - j];
		s[i - j] = s[j];
		s[j] = b;
	}
}
