#include "dog.h"
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
	char *newname, *newowner;
	int i = 0, j = 0, k;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);

	if (name == NULL)
	{
		free(owner);
		free(new);
		return (NULL);
	}
	while (name[i])
		i++;
	newname = malloc(sizeof(char) * i + 1);
	if (newname == NULL)
		return (NULL);
	if (owner == NULL)
	{
		free(name);
		free(new);
		return (NULL);
	}
	while (owner[j])
		j++;
	newowner = malloc(sizeof(char) * j + 1);
	if (newowner == NULL)
	{
		free(newname);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
		newname[k] = name[k];
	for (k = 0; k <= j; k++)
		newowner[k] = owner[k];
	new->name = newname;
	new->age = age;
	new->owner = newowner;
	return (new);
}
