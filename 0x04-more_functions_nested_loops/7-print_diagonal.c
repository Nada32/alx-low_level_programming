#include <stdio.h>

/**
 * print_diagonal - prints diagonal
 * @n: parameter
 * Return: Always 0 (Success)
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
	for (j = 0 ; j < n ; j++)
	{
	for (i = 0 ; i < j ; i++)
	_putchar('\\');
	_putchar('\n');
	}}
	else
	_putchar('\n');
}
