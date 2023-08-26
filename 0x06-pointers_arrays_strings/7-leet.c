#include "main.h"

/**
 * *leet - letter code
 * @c: parameter
 * Return: Always 0 (Success)
 */
char *leet(char *c)
{
	int i, len = 0;

	while (c[len] != '\0')
	len++;
	for (i = 0; i <= len; i++)
	{
	if ((c[i] == 'e') || (c[i] == 'E'))
		c[i] = '3';
	else if ((c[i] == 'a') || (c[i] == 'A'))
		c[i] = '4';
	else if ((c[i] == 'o') || (c[i] == 'O'))
		c[i] = '0';
	else if ((c[i] == 't') || (c[i] == 'T'))
		c[i] = '7';
	else if ((c[i] == 'l') || (c[i] == 'L'))
		c[i] = '1';
	
	}
	return (c);
}
