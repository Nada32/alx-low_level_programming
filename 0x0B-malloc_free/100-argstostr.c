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
	int i, j, z = 0, zz = 0;
	char *arr;

	arr = NULL;
	if ((ac == 0) || (*av == NULL))
	return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j] != '\0'; j++)
	z++;
	}
	z = z + ac + 1;
	arr = (char *) malloc(z * sizeof(char));
	if (arr == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j] != '\0'; j++)
	{
	arr[zz] = av[i][j];
	zz++;
	}
	arr[zz] = '\n';
	zz++;
	}
	return (arr);
}
