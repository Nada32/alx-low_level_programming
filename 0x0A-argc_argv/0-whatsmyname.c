#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
void itsname(char *c);
int main(int argc, char *argv[])
{
	if (argc > 0)
	itsname(argv[0]);
	return (0);
}
