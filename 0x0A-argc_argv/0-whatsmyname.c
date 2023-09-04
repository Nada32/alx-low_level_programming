#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: parameter
 * @argv: parameter
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;
	char *c = *argv;

	if (argc > 0)
	{
	for (i = 0; c[i] != '\0'; i++)
	{
	putchar(c[i]);
	}
	putchar('\n');
	}
	return (0);
}
