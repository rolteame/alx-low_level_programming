#include "dog.h"
/**
 * print_dog - print dog details
 * @d: dog struct
 *
 * Return: no return
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return (NULL);

	(!(d->name)) ? printf("Name: (nil)") : printf("Name: %s\n", d->name);
	(!(d->age)) ? printf("Age: (nil)") : printf("Age: %f\n", d->age);
	(!(d->owner)) ? printf("Owner: (nil)") : printf("Owner: %s\n", d->owner);
}
