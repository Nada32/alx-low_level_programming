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
	char two = '2';
	char four = '4';

	for (i = (int)(a) ; i < ((int)(z) + 1) ; i++)
{
	if ((char)(i) != two && (char)(i) != four)
	{

	d = (char)(i);
	_putchar(d);
}}
	_putchar('\n');

}
