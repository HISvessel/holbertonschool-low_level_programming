#include "dog.h"

/**
 * init_dog - this function creates a variable for a dog struct
 * @d: pointer to a struct
 * @name: name variable
 * @age: age variable
 * @owner: owner variable
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
