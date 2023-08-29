#include "main.h"

/**
 * *_memset - filling memo with a const byet
 * @s: parameter
 * @b: parameter
 * @n: parameter
 * Return: Always 0 (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
	s[i] = b; 
	}
	return (s);
}
