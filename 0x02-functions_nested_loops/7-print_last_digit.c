#include "main.h"

/**
 * print_last_digit - Prints last digit .
 * @z: parameter
 * Return: Always 0 (Success)
 */
int print_last_digit(int z)
{
	int zz;
	int x;

	zz = z % 10;

	if (zz < 0)
	x = -1 * zz;

	else
	x = zz;

	_putchar('0' + x);

	return (x);
}
