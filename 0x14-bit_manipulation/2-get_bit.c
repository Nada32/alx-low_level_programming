#include "main.h"

/**
 * get_bit - Entry point
 * @n: parameter
 * @index: parameter
 * Return: Always 0.
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (((n / 2) == 0) || index == 0)
{
return (n % 2);
return (0);
}

return (get_bit(n / 2, index--));
}
