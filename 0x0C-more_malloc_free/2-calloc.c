#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *_calloc - calloc function.
 * @nmemb: number of elements.
 * @size: size of variable.
 * Return:  An array of two dimensional.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int j = 0;

	if ((nmemb == 0) || (size == 0))
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (j = 0; j < nmemb; j++)
	{
		p[j] = 0;
	}
	return ((void *)p);
}
