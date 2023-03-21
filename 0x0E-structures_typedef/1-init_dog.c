#include "dog.h"
/**
 * init_dog - initialize new dog
 * @d: dog struct
 * @name: dog name
 * @age: dogs age
 * @owner: dogs owner
 * Return: no return
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
