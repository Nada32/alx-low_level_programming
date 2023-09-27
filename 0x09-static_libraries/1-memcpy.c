#include "main.h"

/**
 * _memcpy - filling memo with a const byet
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 * Return: Always 0 (Success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	dest[i] = src[i];
	}
	return (dest);
}
