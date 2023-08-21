#include "main.h"

/**
 * _strlen - length
 * @s: parameter
 * Return: Always 0 (Success)
 */
int _strlen(char *s)
{
	int j;

	j=0;
	while (*s != '\0')
	{
	j=j+1;

	}
	_putchar('0'+j);
	return (j);
}
