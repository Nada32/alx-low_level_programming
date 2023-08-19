#include "main.h"

/**
 * print_triangle - prints triangle
 * @size: parameter
 * Return: Always 0 (Success)
 */
void print_triangle(int size)
{
	int i;
	int j;
	int d;

	if (size > 0)
	{
	for (j = 1 ; j < size + 1 ; j++)
	{
	for (i = 0 ; i < size + 1 ; i++)
	{
	d = size - j;
	if (d < 0)
	d = -1 * d;
	if (i < d)
	_putchari(' ');
	else if (i > d)
	_putchar('#');
	}
	_putchar('\n');
	}}
	else
	_putchar('\n');
}
