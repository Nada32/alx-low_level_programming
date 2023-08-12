#include <stdio.h>

/**
 * main - This program prints all single digit numbers of base 10 .
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int x;

	for (i = 0 ; i < 10 ; i++)
	{
	x = i;
	printf("%d", x);
	}
	putchar('\n');

	return (0);
}
