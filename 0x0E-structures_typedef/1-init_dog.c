#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize a variable of type struct
 * @d: parameter
 * @name: parameter
 * @age: parameter
 * @owner: parameter
 * Return: Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	;
	else
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
