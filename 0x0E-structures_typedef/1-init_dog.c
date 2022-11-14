#include "dog.h"

/**
 * init_dog - initialize a variable type struct dog
 * dog d - address of varible type struct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of a dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
