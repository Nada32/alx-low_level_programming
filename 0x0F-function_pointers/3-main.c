#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int z;

z = (*_p(argv[2]))(atoi(argv[1]), atoi(argv[3]));
printf("%d\n", z);
return (0);
}
