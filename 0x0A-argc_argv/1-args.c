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

	if (argc > 0 && *argv != 0)
	printf("%d\n", argc - 1);
	return (0);
}
