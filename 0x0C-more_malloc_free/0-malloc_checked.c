#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - check
 * @b: parameter
 * Return: Always 0.
 */
void *malloc_checked(unsigned int b)
{
	int *mem, a, *aa;

	mem = (int *) malloc(b * sizeof(int));
	if (mem == NULL)
	{
	a = 98;
	aa = &a;
	return (aa);
	}
	return (mem);
}
