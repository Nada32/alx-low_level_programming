#include "main.h"

/**
 * print_most_numbers - prints nums .
 * Return: Always 0.
 */

void print_most_numbers(void)
{
	char a = '0';
	char z = '9';
	int i;
	char d;

	for (i = (int)(a) ; i < ((int)(z) + 1) ; i++)
{
	if (i != 2 && i != 4)
	{

	d = (char)(i);
	_putchar(d);
}}
	_putchar('\n');

}
