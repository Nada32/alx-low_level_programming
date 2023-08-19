#include "main.h"

/**
 * more_numbers - prints nums x10 .
 * Return: Always 0.
 */

void more_numbers(void)
{
	int i;
	char d;
	int j;
	int k;
	char dd;

	for (j = 0 ; j < 10 ; j++)
{
	for (k = 0 ; k < 2 ; k++)
	for (i = 0 ; i < 10 ; i++)
{
	if ((i < 10 && k == 0) || (i < 5 && k == 1))
	{

	dd = (char)(k);
	d = (char)(i);
	if (k == 1)
	_putchar(dd + '0');
	_putchar(d + '0');
}
}
	_putchar('\n');

}}
