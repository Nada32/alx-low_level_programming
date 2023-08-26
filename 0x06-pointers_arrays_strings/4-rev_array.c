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

	int *arr = (int *) malloc(n * sizeof(int));
	for (i = n-1; i > 0; i--)
	{arr[z] = a[i];
	z++; }
	for (i = 0; i < n; i++)
	a[i] = arr[i];
}
