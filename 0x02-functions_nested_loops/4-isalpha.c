#include "main.h"

/**
 * int _isalpha - checks the alphabet, in lowercase .
 * @c: parameter any char
 * Return: Always 0.
 */

int _int _isalpha(int c)
{
	char a = 'A';
	char z = 'z';
	int i = (int)(a);
	int j = (int)(z);

	if (i <= c && c < j+1)
	return (1);

	else
	return (0);


}
