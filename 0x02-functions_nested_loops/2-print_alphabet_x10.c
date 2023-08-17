#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet*10, in lowercase .
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	char a = 'a';
	char z = 'z';
	int i;
	char d;
	int j;

	for (j = 0; j < 10 ; j++)
{
	for (i = (int)(a) ; i < ((int)(z) + 1) ; i++)
{
	d = (char)(i);
	_putchar(d);
}
	_putchar('\n');

}}
