#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - initialize a variable of type struct dog.
 * @d: struct pointer
 * Return: pointer
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
