#include "main.h"

/**
 * _strncpy - copy
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 * Return: Always 0 (Success)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int ii;


	for (ii = 0; ii < n && src[ii] != '\0'; ii++)
	{
	dest[ii] = src[ii];
	}
	while (ii < n)
	dest[ii++] = '\0';
	return (dest);


}
