#include "main.h"

/**
 * g - Entry point
 * @b: parameter
 * @n: parameter
 * Return: Always 0.
 */
int g(int b, int n)
{
if ((b) * (b) == n)
return (b);
b++;
return (g(b, n));
}

/**
 * _sqrt_recursion - Entry point
 * @n: parameter
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (g(0, n));
}

