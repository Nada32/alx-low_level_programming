#include "main.h"

/**
 * _puts - write string
 * @str: parameter
 * Return: Always 0 (Success)
 */
void _d(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
	_putchar(str[i]);
	i = i + 1;
	}
	_putchar('\n');
}


