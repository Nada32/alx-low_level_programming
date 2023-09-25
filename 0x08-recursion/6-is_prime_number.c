#include "main.h"

/**
 * h - Entry point
 * @i: parameter
 * @n: parameter
 * Return: Always 0.
 */
int h(int i, int n)
{
if ((n % i) != 0)
return (1);
else
return (0);
return (h(n, i++));
}

/**
 * is_prime_number - Entry point
 * @n: parameter
 * Return: Always 0.
 */
int is_prime_number(int n)
{
if (n < 2)
return (0);
return (h(2, n));
}

