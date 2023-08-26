#include "main.h"

/**
 * reverse_array - rev arr
 * @a: parameter
 * @n: parameter
 * Return: Always 0 (Success)
 */
void reverse_array(int *a, int n)
{
	int i, z = 0;

	for (i = n-1; i > 0; i--)
	{a[z] = a[i];
	z++; }
}
