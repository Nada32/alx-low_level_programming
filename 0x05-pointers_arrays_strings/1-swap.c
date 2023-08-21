#include <stdio.h>

/**
 * swap_int - swapping
 * @a: parameter
 * @b: parameter
 * Return: Always 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int temp;
	int temp2;

	temp = *a;
	temp2 = *b;
	*b = temp;
	*a = temp2;



}
