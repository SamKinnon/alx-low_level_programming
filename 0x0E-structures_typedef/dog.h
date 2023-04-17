#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a struct to hold the dog infos
 * @name: the first member
 * @age: the second member
 * @owner: the third member
 *
 * Descrption: descrption
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
