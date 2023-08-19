#include "main.h"

/**
 * print_numbers - prints nums .
 * Return: Always 0.
 */

void print_numbers(void)
{
	char a = '0';
	char z = '9';
	int i;
	char d;

	for (i = (int)(a) ; i < ((int)(z) + 1) ; i++)
{
	d = (char)(i);
	_putchar(d);
}
	_putchar('\n');

}
