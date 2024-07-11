#include <stdio.h>
#include "dog.h"

void print_dog(struct dog *d)
{
	if (d == 0)
	{
		return;
	}
	if (name == NULL)
	{
		printf("Name: (nil)")
	}
	else
	{
		printf("Name: %s", dog->name);
	}

	if (age == NULL)
	{
		printf("\nAge: (nil)")
	}
	else
	{
		printf("\nAge:%f ", dog->age);
	}

	if (owner == NULL)
	{
		printf("\nOwner: (nil)")
	}
	else
	{
		printf("\nOwner: %s", dog->owner);
	}
}
