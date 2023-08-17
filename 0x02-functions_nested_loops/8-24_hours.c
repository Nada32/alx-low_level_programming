#include "main.h"

/**
 * jack_bauer - Prints minutes
 *
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
	int i;
	int j;
	int k;
	int l;
	int x;

	for (i = 0 ; i < 3 ; i++)
{
	if (i < 2)
	x = 10;
	else if (i == 2)
	x = 4;
	for (j = 0 ; j < x ; j++)
{
	for (k = 0 ; k < 6 ; k++)
{
	for (l = 0 ; l < 10 ; l++)
{

	_putchar(i + '0');
	_putchar(j + '0');
	_putchar(':');
	_putchar(k + '0');
	_putchar(l + '0');
	_putchar('\n');

}}}}

}
