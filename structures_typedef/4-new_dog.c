#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - loops over the string as an array
 * @s: is a character
 * Return: final value of i *
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	return (i);

}

/**
 *_strncpy - copy characters from src to dest
 *@dest: is a pointer
 *@src: is a pointer
 *@n: is an integer
 *Return: pointer start
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *start = dest;

	while (n > 0 && *src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
return (start);
}

/**
 * new_dog - create a new dog and stores the value given in the function
 * @name: a pointer to string of characters
 * @age: a pointer a float
 * @owner: a pointer to a string of characters
 * Return: a pointer to the structure dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	/* Allocate memory for the new dog struct */
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	/* Allocate memory and copy the name */
	dog->name = malloc(_strlen(name) + 1);
	if (dog->name == (NULL))
	{
		free(dog);
		return (NULL);
	}
	_strcpy(dog->name, name);

	/* Allocate memory and copy the owner */
	dog->owner = malloc(_strlen(owner) + 1);
	if (dog->owner == (NULL))
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	_strcpy(dog->owner, owner);

	/* Set the age */
	dog->age = age;
	return (dog);
}
