#include "dog.h"

/**
 * _strlen - this function stores a copy of owner
 * @s: pointer to owner
 * Return: the length of string
 */

int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
	{
	}
	return (len);
}

/**
 *  _strcpy- this copies the dog's name
 * @s: string to be copied
 * @d: string to recieve copy
 * return: NULL
 */

void _strcpy(char *d, char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		d[len] = s[len];
		len++;
	}
	d[len] = '\0';
}

/**
 * new_dog - this prints out a new dog
 * @name: name data
 * @age: age data
 * @owner: owner data
 * Return: the new structure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *name_copy;
	char *owner_copy;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	name_copy = malloc(_strlen(name) + 1);
	if (name_copy == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	_strcpy(name_copy, name);

	owner_copy = malloc(_strlen(owner) + 1);
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(new_dog);
		return (NULL);
	}
	_strcpy(owner_copy, owner);
	new_dog->name = name_copy;
	new_dog->age = age;
	new_dog->owner = owner_copy;

	return (new_dog);
}
