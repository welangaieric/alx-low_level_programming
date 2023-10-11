#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * struct dog - structure of a dog
 * print_dog - prints out the dog
 * @d : pointer to the struct dog
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);

}
