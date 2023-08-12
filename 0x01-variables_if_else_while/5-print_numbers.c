#include <stdio.h>
#include <math.h>
/**
 * main - This program prints all single digit numbers of base 10 .
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int x;

	for (i = 0 ; i<10 ; i++)
	{
	x = pow(10, i);
	printf("%d",x);
	}


	return (0);
}
