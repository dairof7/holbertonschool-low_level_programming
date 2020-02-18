#include "holberton.h"
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
	i--;

	char b[i];
	for (j = 0; j <= i; j++)
	{
		b[j] = s[i - j];
	}
	for (j = 0; j <= i; j++)
		s[j] = b[j];
}
