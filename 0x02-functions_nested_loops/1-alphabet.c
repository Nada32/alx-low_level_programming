#include "main.h"

/**
 * main - check the code for Holberton School students.
 *
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
