#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - function of the dog
 * struct dog - a struct of a dog
 * Descrption: description
 * @name: member one
 * @age:member two
 * @d: a pointer to struct dog to initialize
 * @owner: the third member
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
