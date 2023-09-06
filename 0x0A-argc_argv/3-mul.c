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

	if (argc < 2)
	{
	printf("Error\n");
	return (1);
	}

	printf("%d\n", ((int) *argv[1] * (int) *argv[2]));

	return (0);
}
