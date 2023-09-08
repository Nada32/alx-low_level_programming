#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - from min to max
 * @min: parameter
 * @max: parameter
 * Return: Always 0.
 */
int *array_range(int min, int max)
{
	unsigned int i;
	unsigned int size;
	int *a;

	size = max - min;
	if (min > max)
	return (NULL);
	a = malloc(size);
	if (a == NULL)
	return (NULL);

	for (i = 0; min <= max; i++)
	{a[i] = min;
	min++; }
	return (a);
}
