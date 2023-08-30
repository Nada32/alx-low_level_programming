#include "main.h"

/**
 * _strspn - filling memo with a const byet
 * @s: parameter
 * @accept: parameter
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int j, i;
	unsigned int z = 0;

	for (i = 0; (s[i] != '\0'); i++)
	{
	for (j = 0; (accept[j] != '\0'); j++)
	{
	if (s[i] == accept[j])
	z++;
	}}
	return (z - 2);
}
