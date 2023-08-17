#include "main.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	print_alphabet();
	return (0);
}

int print_alphabet()
{
	char a = 'a';
	char z = 'z';
	int i;


	for (i = (int)(a) ; i < ((int)(z) + 1) ; i++)
{
	_putchar((char)(i));
}
	_putchar('\n');
	return 0;
}
