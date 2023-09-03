#include "main.h"

/**
 * itsname - print name
 * @c: parameter
 * Return: Always 0 (Success)
 */
void itsname(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
	_putchar(c[i]);
	}
}
