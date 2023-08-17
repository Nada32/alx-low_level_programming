#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int print_alphabet(); 
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
	int d;

	for (i = (int)(a) ; i < ((int)(z) + 1) ; i++)
{
	putchar((char)(i));
}
	putchar(\n);
	return 0;
}
