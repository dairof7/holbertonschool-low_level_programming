#include "holberton.h"
/**
 * *_memset - concatenate strings
 * @s: array
 * @b: array
 * @n: numers os bytes to concatenate
 * Return: Always 0.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
