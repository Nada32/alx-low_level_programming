#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase .
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char a = 'a';
	char z = 'z';
	int i;
	char d;

	for (i = (int)(a) ; i < ((int)(z) + 1) ; i++)
{
	d = (char)(i);
	_putchar(d);
}
	_putchar('\n');

}
