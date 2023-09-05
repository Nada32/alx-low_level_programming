#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - string
 * @str: parameter
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	unsigned int i, z;

	char *arr = NULL;

	arr = (char *) malloc((2 * sizeof(str)) * sizeof(char));

	if ((arr == NULL) || (str == 0))
	{
	return (NULL);
	}
	for (i = 0; i < sizeof(str); i++)
	arr[i] = str[i];
	for (i = sizeof(str); i < (2 * sizeof(str)); i++)
	{arr[i] = str[z];
	z++;
	}
	return (arr);
}
