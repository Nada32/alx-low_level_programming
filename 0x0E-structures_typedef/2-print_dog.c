#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - initialize a variable of type struct
 * @d: parameter
 * Return: Always 0.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	;
	else
	{
	if (d->name != NULL)
	printf("Name: %s\n", d->name);
	else
	printf("Name: (nil)\n");
	if (d->age != 'void *')
	printf("Name: %f\n", d->age);
	else
	printf("Name: (nil)\n");
	if (d->owner != NULL)
	printf("Name: %s", d->owner);
	else
	printf("Name: (nil)\n");
	}
}
