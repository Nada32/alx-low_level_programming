#include "main.h"

/**
 * _strlen - length
 * @s: parameter
 * Return: Always 0 (Success)
 */
int _strlen(char *s)
{
	int i;
	int j;

	j=0;
	for (i = 0 ; i < *s ; i++)
	{
	j=j+1;

	}
	_putchar('0'+j);
	return (j);
}
