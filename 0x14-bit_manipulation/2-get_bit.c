#include "main.h"

/**
 * get_bit - Entry point
 * @n: parameter
 * @index: parameter
 * Return: Always 0.
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index == 0)
{
return (n % 2);
}
else if ((n / 2) == 0)
return (0);
index--;
get_bit(n / 2, index);
}
