#include "dog.h"
#include <stdlib.h>

/**
 * copy - copy's string
 * @src: source of string
 * Return: pointer to new copied address
 */

char *_copy(char *src)
{
	int i, len;
	char *c;

	if (src == NULL)
		return (NULL);
	len = 0;
	while (src[len] != '\0')
		len++;
	c = malloc(sizeof(char) * (len + 1));
	if (c == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		c[i] = src[i];
		i++;
	}
	c[i] = '\0';
	return (c);
}

/**
 * new_dog - create a new dog
 * @name: name of a dog
 * @age: age of a dog
 * @owner: owner of a dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *_name, *_owner;


	if (name == NULL || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(struct dog));

	if (dog == NULL)
		return(NULL);

	_name = _copy(name);
	if (_name == NULL)
	{
		free(dog);
		return (NULL);
	}
	_owner = _copy(owner);
	if (_owner == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->name = _name;
	dog->age = age;
	dog->owner = _owner;

	return (dog);
}
