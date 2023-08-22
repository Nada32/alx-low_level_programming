#include "main.h"

/**
 * rev_string - write rev string
 * @s: parameter
 * Return: Always 0 (Success)
 */
void rev_string(char *s)
{
	int i;
	int z;

	i = 0;
	while (s[i] != '\0')
	{

	i = i + 1;
	}


	for (z = i - 1 ; z > -1 ; z--)
	_putchar(s[z]);
	_putchar('\n');
}


