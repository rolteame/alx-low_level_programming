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

	if (!d->name || !d->age || !d->owner == "(nil)")
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
