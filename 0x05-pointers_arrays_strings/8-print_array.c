#include <stdio.h>
#include "main.h"

/**
 * print_array - Entry point
 * @a: parameter
 * @n: parameter
 * Return: Always 0 (Success)
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	printf(a[i]);

}

