#include "main.h"

/**
 * puts2 - other char
 * @str: parameter
 * Return: Always 0 (Success)
 */
void puts2(char *str)
{
	int i;

	int len = 0;

	while (str[len] != '\0')
	len++;

	for (i = 0 ; i < len ; i++)
	{
	if (i % 2 == 0)
	_putchar(str[i]);
	}
	_putchar('\n');
}
