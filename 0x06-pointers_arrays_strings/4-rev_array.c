#include "main.h"

/**
 * reverse_array - rev arr
 * @a: parameter
 * @n: parameter
 * Return: Always 0 (Success)
 */
void reverse_array(int *a, int n)
{
	int i, temp, z = n - 1;

	for (i = 0; i < n / 2; i++)
	{temp = a[i];
	a[i] = a[z];
	a[z--] = temp; }
}
