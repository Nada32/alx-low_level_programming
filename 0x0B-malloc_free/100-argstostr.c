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
	int i, j;
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
	{
	for (j = 0; *av[j] != '\0'; j++)
	arr[i][j] = *av[i][j];
	}
	return (arr);
}
