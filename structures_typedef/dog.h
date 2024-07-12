#ifndef MYSTRUCT
#define MYSTRUCT
/**
 * struct dog - structure contains elements related to a dog
 * @name: pointer to dog's name
 * @age: pointer to dog's age
 * @owner: pointer to dog owner's name
 */

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
