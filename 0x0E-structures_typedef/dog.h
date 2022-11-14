#ifndef HEADER_FILE
#define HEADER_FILE

/**
 * struct dog - new type define dog properties
 * @name: name of dog
 * @age: age of dog
 * @owner: the owner of dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
