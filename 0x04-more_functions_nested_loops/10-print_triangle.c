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
	d = n - j;
	if (d < 0)
	d = d * (-1);
	if (i < d)
	_putchar(' ');
	else if (i > d)
	_putchar('#');
	}
	_putchar('\n');
	}}
	else
	_putchar('\n');
}
