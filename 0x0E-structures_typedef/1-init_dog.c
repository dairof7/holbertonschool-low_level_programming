#include "dog.h"
/**
 * init_dog -  initialize a variable of type struct dog.
 * @d: struct
 * @name: name parameter
 * @age: age parameter
 * @owner: owner parameter
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
