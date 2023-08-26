#include "main.h"

/**
 * string_toupper - all upper case
 * @c: parameter
 * Return: Always 0 (Success)
 */
char *string_toupper(char *c)
{
	int i, len = 0;

	while (c[len] != '\0')
	len++;
	for (i = 0; i <= len; i++)
	if ((c[i] >= 'a') && (c[i] < ('z' + 1)))
	{
	c[i] = c[i] - 32;
	}
	return (c);	
}
