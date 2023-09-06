#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - string
 * @s1: parameter
 * @s2: parameter
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, z = 0;
	int sizee = sizeof(s1) + sizeof(s2);
	char *arr = (char *) malloc(sizee + 1);

	if (arr == NULL || s1 == NULL || s2 == NULL)
	return (NULL);
	while(s1[i] != '\0')
	{arr[i] = s1[i];
	i++;
	}
	for(i = sizee / 2; (i < sizee) && (s2[z] != '\0'); i++)
	{
	arr[i] = s2[z];
	z++;
	}
	return (arr);

}
