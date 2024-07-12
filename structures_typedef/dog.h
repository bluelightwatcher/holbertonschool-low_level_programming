#ifndef TOUTOU_H
#define TOUTOU_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * struct dog - infos sur toutou
 * @name: nom chien
 * @age: age clebs
 * @owner: proprio du boudin
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};
typedef struct dog dog_t;
	void	init_dog(struct dog *d, char *name, float age, char *owner);
	void	print_dog(struct dog *d);
	dog_t	*new_dog(char *name, float age, char *owner);
	void	free_dog(dog_t *d);
#endif

/**#ifndef MYSTRUCT
 * #define MYSTRUCT

 * struct dog - structure contains elements related to a dog
 * @name: pointer to dog's name
 * @age: pointer to dog's age
 * @owner: pointer to dog owner's name
 *

void init_dog(struct dog *d, char *name, float age, char *owner);

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

#endif
*/
