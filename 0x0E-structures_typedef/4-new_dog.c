#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - initialize a variable of type struct dog.
 * @name: name parameter
 * @age: age parameter
 * @owner: owner parameter
 * Return: pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);

	if (name == NULL)
	{
		free(owner);
		free(new);
		return (NULL);
	}
	if (owner == NULL)
	{
		free(name);
		free(new);
		return (NULL);
	}
	new->name = name;
	new->age = age;
	new->owner = owner;
	return (new);
}
