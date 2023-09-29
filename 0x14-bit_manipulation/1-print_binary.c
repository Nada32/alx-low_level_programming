#include "main.h"

/**
 * print_binary - Entry point
 * @b: parameter
 * Return: Always 0.
 */
void print_binary(unsigned long int b)
{
if ((b / 2) == 0)
{
_putchar(b + '0');
return;
}
print_binary(b / 2);
_putchar(((b % 2) + '0'));
}
