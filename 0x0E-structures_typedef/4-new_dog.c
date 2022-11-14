#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - create a new dog
 * @name: name of a dog
 * @age: age of a dog
 * @owner: owner of a dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(struct dog));
	if (dog == NULL)
		return (NULL);
	if (name == NULL)
		return (NULL);
	if (owner == NULL)
		return (NULL);
	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
}

