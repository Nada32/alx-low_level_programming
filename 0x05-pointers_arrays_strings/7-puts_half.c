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

	mn = len;
	i = len / 2;
	if (str[len / 2] == ' ')
	{
	i = (len / 2) + 1;
	len = mn;
	}
	for (; i < len ; i++)
	{

	_putchar(str[i]);
	}
	_putchar('\n');
}
