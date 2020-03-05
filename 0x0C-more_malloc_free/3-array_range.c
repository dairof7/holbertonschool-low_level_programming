#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *array_range - calloc function.
 * @min: min value.
 * @max: mex value.
 * Return:  An array.
 */
int *array_range(int min, int max)
{
	int *p;
	int len = 0, i = 0;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	p = malloc(len * sizeof(int));
	if (p == NULL)
		return (NULL);
	while (min <= max)
	{
		p[i] = min;
		i++;
		min++;
	}
	return (p);
}
