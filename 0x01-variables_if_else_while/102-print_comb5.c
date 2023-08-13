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
	int z;

	for (i = 0 ; i < 10 ; i++)
	{
	for (x = i ; x < 10 ; x++)
	{
	for (y = 0 ; y < 10 ; y++)
	{
	for (z = y - 1 ; z < 10 ; z++)
	{
	if (y > 0 || z > 0)
	{
	putchar(i + '0');
	putchar(x + '0');
	putchar(' ');
	putchar(y + '0');
	putchar(z + '0');
	if (i < 8 || x < 8 || y < 8 || z < 8)
	putchar(',');
	}}}}}

	putchar('\n');

	return (0);
}
