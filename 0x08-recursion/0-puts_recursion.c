#include "main.h"

/**
 * _puts_recursion - function that prints a string, followed by a new line
 * @s:parameter
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{
	int i, len = 0;

	while (s[len] != '\0')
		len++;
	if (i > len)
		return (0);
	_putchar(s[i]);
	return (s[i])
	i++;
}

