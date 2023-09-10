#include "main.h"

/**
 * _puts_recursion - function that prints a string, followed by a new line
 * @s:parameter
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{
	if (!*s)
	return (0);
	putchar(*s);
	return (_puts_recursion(s+1));

}
