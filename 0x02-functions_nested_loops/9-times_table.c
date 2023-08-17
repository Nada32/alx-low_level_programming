#include "main.h"

/**
 * times_table - Prints table till x9 .
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int i;
	int j;
	int z;
	int zz;
	int zzz;

	for (i = 0 ; i < 10 ; i++)
	{
	for (j = 0 ; j < 10 ; j++)
	{
	z = i * j;
	if (z < 10)
	{
	_putchar(' ');
	_putchar('0' + z);
	}
	else if (z > 9)
	{
	zz = z / 10;
	zzz = z % 10;
	_putchar('0' + zz);
	_putchar('0' + zzz);
	}
	if (j < 9)
	{
	_putchar(',');
	_putchar(' ');
	}}
	_putchar('\n');
	}

}
