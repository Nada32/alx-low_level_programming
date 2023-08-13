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
	for (x = i + 1 ; x < 10 ; x++)
	{
	putchar(i + '0');
	putchar(x + '0');

	if (i < 9)
	{
	putchar(',');
	putchar(' ');
	}}
	}
	putchar('\n');

	return (0);
}
