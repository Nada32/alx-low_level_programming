#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: parameter
 * @argv: parameter
 * Return: Always 0.
 */
int main(int argc, char **argv)
	{

	 int i, z, x = 0, y = 0;

	if (argc < 2)
	{
	printf("Error\n");
	return (1);
	}
	for (i = 0; *argv[1] != '\0'; i++)
	{
	x = x * 10 + (*argv[1] - 48);
	}
	for (i = 0; *argv[2] != '\0'; i++)
	{
	y = y * 10 + (*argv[2] - 48);
	}
	z = x * y;

	printf("%d\n", z);

	return (0);

	}
