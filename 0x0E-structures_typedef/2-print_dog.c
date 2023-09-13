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
	if (d->name)
	printf("Name: %s\n", d->name);
	else
	printf("Name: (nil)\n");
	printf("Age: %f\n", d->age);
	if (d->owner)
	printf("Owner: %s\n", d->owner);
	else
	printf("Owner: (nil)\n");
	}
}
