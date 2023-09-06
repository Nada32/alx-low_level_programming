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
	char *p;
	int i;
	char *arr;

	p = s1;
	p = s2;
	i = sizeof(s1) + sizeof(s2);
	arr = (char *) malloc(i + 1);
	p = arr;

	while (*s1)
	*p++ = *s1++;
	while (*s2)
	*p++ = *s2++;
	return (arr);
}
