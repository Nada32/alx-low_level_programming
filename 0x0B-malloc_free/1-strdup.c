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

	char *arr = (char *) malloc((sizeof(str)) * sizeof(char));
	if (arr == NULL || str == NULL)
	return (NULL);
	arr = str;	
	return (arr);

}
