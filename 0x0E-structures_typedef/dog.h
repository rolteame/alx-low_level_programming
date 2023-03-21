#ifndef _DOG_H_
#define _DOG_H_
#include <stdio.h>
/**
 * struct dog - struct for dog information
 * @name: name of dog
 * @age: dogs age
 * @owner: owners name
 * Description: struct called "dog" that stores its name, its age
 * and the name of its owner.
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
