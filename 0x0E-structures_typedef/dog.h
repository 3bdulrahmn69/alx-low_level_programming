#ifndef DOG
#define DOG

/**
 * struct dog - dog
 * @name: dog Name
 * @age: dog Age
 * @owner: dog Owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#include <stdio.h>

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);


typedef struct dog dog_t;

#endif
