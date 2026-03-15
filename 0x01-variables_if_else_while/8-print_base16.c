#include <stdio.h>

/**
 * main - This program prints all single numbers in base 16, hexa decimal
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int x;

	for (i = 0 ; i < 16 ; i++)
	{
	x = i;
	printf("%x", x);
	}
	putchar('\n');

	return (0);
}
