#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * strtow - array
 * @str: parameter
 * Return: Always 0.
 */
char **strtow(char *str)
{
	int i, j, z = 0, zz = 0;
	int ac = 0, c = 0;
	char **arr, **av;

	arr = NULL;
	av = NULL;
	for (i = 0; str[i] != '\0'; i++)
{
	if (str[i] == ' ')
	ac++;
	for (c = 0; (str[i - 1] == ' ') && (str[i + c] != ' '); c++)
{
	av[i][i + c] = str[i + c];
}
}
	ac = ac + 1;
	if ((ac == 0) || (*av == NULL))
	return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j] != '\0'; j++)
	z++;
	}
	z = z + ac + 1;
	arr = (char **) malloc(z * sizeof(char));
	if (*arr == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j] != '\0'; j++)
	{
	arr[i][zz] = av[i][j];
	zz++;
	}
	arr[i][zz] = '\n';
	zz++;
	}
	return (arr);
}
