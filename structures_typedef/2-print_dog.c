#include <stdio.h>
#include "dog.h"

void print_dog(struct dog *d)
{


	if (d == 0)
	{
		return;
	}
	if (d->name == NULL)
	{
		printf("Name: (nil)");
	}
	else
	{
		printf("Name: %s", d->name);
	}

	if (d->age == 0)
	{
		printf("\nAge: (nil)");
	}
	else
	{
		printf("\nAge:%f ", d->age);
	}

	if (d->owner == NULL)
	{
		printf("\nOwner: (nil)");
	}
	else
	{
		printf("\nOwner: %s", d->owner);
	}
	return;
}
