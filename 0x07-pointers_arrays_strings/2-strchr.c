#include "holberton.h"
/**
 * *_memcpy - copy data in array
 * @dest: array dest
 * @src: array orig
 * @n: numers os bytes to copy in the arrar dest
 * Return: Always 0.
 */

char *_strchr(char *s, char c)
{
	int i, n, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			n = i;
	}
	char dest[i];
	for (j = n; j < i; j++)
		{
			dest[j] = s[j];
		}

	return (dest);
}