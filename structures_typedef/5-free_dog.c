#include<dog.h>

/**
 * free_dog - frees pointer to structure dog_t
 * @d: is the pointer to dog_t
 */

void free_dog(dog_t *d)
{
	if (d == 0)
	return;

	free(d->name);
	free(d->owner);
	free(d);
}
