#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * argstostr - array
 * @av: parameter
 * @ac: parameter
 * Return: Always 0.
 */
char *argstostr(int ac, char **av)
{
	int i;
	char *arr;

	arr = NULL;
	if ((ac == 0) || (*av == NULL))
	return (NULL);
	arr = (char *) malloc(ac * sizeof(char));
	if (arr == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < ac; i++)
	arr[i] = *av[i];
	return (arr);
}
