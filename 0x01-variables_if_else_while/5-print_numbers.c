#include <stdio.h>
#include <math.h>
/**
 * main - This program prints all single digit numbers of base 10 .
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i;
	char x;

	for (i = 0 ; i<10 ; i++)
	{
	x = pow(10, i);
	putchar(x);
	}


	return (0);
}
