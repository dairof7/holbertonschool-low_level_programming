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
char b;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	for (j = 0; j < i / 2; j++)
	{
		b = s[i - j];
		s[i - j] = s[j];
		s[j] = b;
	}
}
