#include "main.h"

/**
 * _pow_recursion - power
 * @x: parameter
 * @y: parameter
 * Return: Always 0 (Success)
 */
int _pow_recursion(int x, int y)
{
if (y !=1 && y != 0)
{ 

	if (y > 0)
	return(x*_pow_recursion(x, y - 1));
	else if (y < 0)
	return(-1);
}
	else if (y == 0)
	return (1);
	else
	return (0);

}
