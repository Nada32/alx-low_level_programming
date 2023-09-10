#include "main.h"

/**
 * _isdigit - checks the digit .
 * @c: parameter any char
 * Return: Always 0.
 */

int _isdigit(int c)
{
	char a = '0';
	char z = '9';
	int i = (int)(a);
	int j = (int)(z);

	if (i <= c && c < j + 1)
	return (1);

	else
	return (0);


}
