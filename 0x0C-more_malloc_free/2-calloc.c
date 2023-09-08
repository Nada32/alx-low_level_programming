#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocate arr
 * @nmemb: parameter
 * @size: parameter
 * Return: Always 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *a, i;

	a = (unsigned int *) malloc(nmemb * size);
	if ((a == NULL) || (nmemb == 0) || (size == 0))
	return (NULL);

	for (i = 0; i < size; i++)
	a[i] = 0;
	return (a);
}
