#include "main.h"

/**
 * factorial - Entry point
 * @n: parameter
 * Return: Always 0.
 */
int factorial(int n)
{

if ((n == 1 || n == 0))
return (1);
if (n < 0)
return (-1);
return (n * factorial(n - 1));

}
