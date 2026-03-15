#include <stdio.h>

/**
 * main - Entry point this program prints numbers as char
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int zero = 48;
	int nine = 57;
	int i;

	for (i = zero ; i < (nine + 1) ; i++)
	{
	putchar(i);
	}

	putchar('\n');

	return (0);
}
