#include "main.h"

/**
 * _strlen - length
 * @s: parameter
 * Return: Always 0 (Success)
 */
int _strlen(char *s)
{
	int j;

	j = 0;
	while (s[j] != '\0')
	{
	j = j + 1;

	}

	return (j);
}
