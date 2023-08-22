#include "main.h"

/**
 * rev_string - write rev string
 * @s: parameter
 * Return: Always 0 (Success)
 */
void rev_string(char *s)
{
	int i, z, ii, x;
	char temp;

	i = 0;
	while (s[i] != '\0')
	{

	i = i + 1;
	}
	x = i - 1;

	for (ii = 0; ii < i / 2; ii++)
	{
		temp = s[ii];
		s[ii] = s[x];
		s[x--] = temp;
	}
}


