#include <stdio.h>

/**
 * main - This program prints all single digit numbers of base 10 0, 1, 2, idea +'0' make it reach numbers in unicode
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
	putchar(i + '0');
	if (i < 9)
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');

	return (0);
}
