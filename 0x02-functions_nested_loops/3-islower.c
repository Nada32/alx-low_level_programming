#include "main.h"

/**
 * _islower - checks the lower  alphabet, in lowercase .
 * Return: Always 0.
 */

int _islower(int c)
{
	char a = 'a';
	char z = 'z';
	int i = (int)(a);
	int j = (int)(z);

	if (i < c < j)
	return 1;

	else
	return 0;


}
