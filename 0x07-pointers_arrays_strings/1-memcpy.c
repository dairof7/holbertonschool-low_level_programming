#include "holberton.h"
/**
 * *_memcpy - copy data in array
 * @dest: array dest
 * @src: array orig
 * @n: numers os bytes to copy in the arrar dest
 * Return: Always 0.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
