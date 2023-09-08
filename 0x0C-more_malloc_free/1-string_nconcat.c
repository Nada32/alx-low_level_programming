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
	unsigned int ii, j, len1 = 0, len2 = 0, size, x;

	ii = 0;
	j = 0;
	while (s1[len1] != '\0')
	len1++;
	while (s2[len2] != '\0')
	len2++;
	len1 = len1 - 1;
	len2 = len2 - 1;
	ptr1 = &s1[0];
	ptr2 = &s2[0];
	size = len1 + n;
	a = (char *) malloc(size);
	if (a == NULL)
	return (NULL);
	while ((j < size) && (s1[j] != '\0'))
{
	a[j] = *ptr1++;
	j++;
}
	if (n < size)
	x = size;
	else if (n >= size)
	x = len1 + len2;
	while ((j <= x) && (s2[ii] != '\0'))
{
	a[j] = *ptr2++;
	j++;
	ii++;
}
	return (a);
}
