#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *create_array - array
 * @size: parameter
 * @c: parameter
 * Return: Always 0.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *arr = NULL;

	arr = (char *) malloc(size * sizeof(char));

	if ((arr == NULL) || (size == 0))
	{
	return (NULL);
	}
	for (i = 0; i < size; i++)
	*arr = c;
	return (arr);
}
