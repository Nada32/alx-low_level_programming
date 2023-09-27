#include "main.h"

/**
 * _na - write string
 * @str: parameter
 * Return: Always 0 (Success)
 */
void _na(char *str)
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


