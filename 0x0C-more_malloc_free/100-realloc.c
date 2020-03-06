#include "holberton.h"
#include <stdlib.h>

/**
 * *_realloc - function that reallocates a memory block .
 * @ptr: input array pointer.
 * @old_size: old size of memory.
 * @new_size: newsize of memory
 * Return:  array reallocated.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p, *pbuff;
	unsigned int i;

	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
	{
		p = malloc(new_size);

		if (p == NULL)
			return (NULL);

		return (p);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	pbuff = ptr;
	p = malloc(sizeof(*pbuff) * new_size);

	if (p == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (i = 0; i < old_size; i++)
		p[i] = *(pbuff + i);

	free(ptr);
	return (p);

}
