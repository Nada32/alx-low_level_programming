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
	int y;
	for (i = 0 ; i < 10 ; i++)
	{
	for (x = i + 1 ; x < 10 ; x++)
	{
	for (y = x + 1 ; y < 10 ; y++)
	{
	putchar(i + '0');
	putchar(x + '0');
	putchar(y + '0');
	if (i < 8)
	{
	putchar(',');
	putchar(' ');
	}}}
	}
	putchar('\n');

	return (0);
}
