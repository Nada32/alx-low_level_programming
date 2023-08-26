#include "main.h"

/**
 * reverse_array - rev arr
 * @a: parameter
 * @n: parameter
 * Return: Always 0 (Success)
 */
void reverse_array(int *a, int n)
{
	int arr[n], i, z = 0;

	for (i = n-1; i > 0; i--)
	{arr[z] = a[i];
	z++; }
	for (i = 0; i < n; i++)
	a[i] = arr[i];
}
