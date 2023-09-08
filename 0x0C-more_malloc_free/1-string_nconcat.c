#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concate
 * @s1: parameter
 * @s2: parameter
 * @n: parameter
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a, *ptr1, *ptr2;
	unsigned int ii, j, len1;
	unsigned int size;

	ii = 0;
	j = 0;
	len1 = sizeof(s1);
	ptr1 = &s1[0];
	ptr2 = &s2[0];
	size = len1 + n * sizeof(char);
	a = (char *) malloc(size);
	if (a == NULL)
	return (NULL);

	while ((j < size) && (s1[j] != '\0'))
{
	a[j] = *ptr1++;
	j++;
}

	while ((j < size - 3) && (s2[ii] != '\0'))
{
	a[j] = *ptr2++;

	j++;

	ii++;
}


	return (a);

}
