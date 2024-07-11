#include"dog.h"
/**
 * init_dog - function initializes the struct with pointer
 * @d: is a pointer to struct dog
 * @name: is a pointer to variable name
 * @age: is a float
 * @owner: is a pointer to variable owner
 */


void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d <= 0)
	{
		return (NULL);
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}
