#include "main.h"

/**
 * _isupper - checks the upper  alphabet, in uppercase .
 * @c: parameter any char
 * Return: Always 0.
 */

int _isupper(int c)
{
	char a = 'A';
	char z = 'Z';
	int i = (int)(a);
	int j = (int)(z);

	if (i <= c && c < j + 1)
	return (1);

	else
	return (0);


}
