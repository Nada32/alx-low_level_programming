#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * itsname - print name
 * @c: parameter
 * Return: Always 0.
 */
void itsname(char *c);
int main(int argc, char *argv[])
{
	if (argc > 0)
	itsname(argv[0]);
	return (0);
}
void itsname(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
	_putchar(c[i]);
	}
}
