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
	int *mem;

	mem = (int *) malloc(b * sizeof(int));
	if (mem == NULL)
	{
	_putchar('9');
	_putchar('8');
	}
	return (mem);
}
