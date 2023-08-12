#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char zero = '0';
	char nine = '9';
	int i;

	for (i = (int)(zero) ; i < ((int)(nine) + 1) ; i++)
	{
	putchar((char)(i));
	}

	putchar('\n');

	return (0);
}
