#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase followed by a new line.
 * 
 * Return: Always 0.
 */
int main(void)
{
	int i;
	char a = 'a';
	char z = 'z';

	for (i = (int)(z); i > ((int)(a) - 1); i--)
	putchar((char)(i));

	putchar('\n');

	return (0);

}
