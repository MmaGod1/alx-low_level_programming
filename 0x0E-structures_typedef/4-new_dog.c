#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog type.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: struct dog.
 * if fails, returns NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *a_dog;
	int i, a_name, a_owner;

	a_dog = malloc(sizeof(*a_dog));
	if (a_dog == NULL || !(name) || !(owner))
	{
		free(a_dog);
		return (NULL);
	}

	for (a_name = 0; name[a_name]; a_name++)
		;

	for (a_owner = 0; owner[a_owner]; a_owner++)
		;

	a_dog->name = malloc(a_name + 1);
	a_dog->owner = malloc(a_owner + 1);

	if (!(a_dog->name) || !(a_dog->owner))
	{
		free(a_dog->owner);
		free(a_dog->name);
		free(a_dog);
		return (NULL);
	}

	for (i = 0; i < a_name; i++)
		a_dog->name[i] = name[i];
	a_dog->name[i] = '\0';

	a_dog->age = age;

	for (i = 0; i < a_owner; i++)
		a_dog->owner[i] = owner[i];
	a_dog->owner[i] = '\0';

	return (a_dog);
}
