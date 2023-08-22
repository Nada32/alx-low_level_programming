#include "main.h"

/**
 * puts_half - other char
 * @str: parameter
 * Return: Always 0 (Success)
 */
void puts_half(char *str)
{
	int i, mn;

	int len = 0;

	while (str[len] != '\0')
	len++;
	
	i=len / 2;
	mn = len;
	if (len % 2 == 0)
	len = mn;
	else
	i = (mn + 1) / 2;
	for (i = len / 2; i < len ; i++)
	{
	_putchar(str[i]);
	}
	_putchar('\n');
}
