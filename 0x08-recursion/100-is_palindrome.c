#include "main.h"

/**
 * is_palindrome - function
 * @s:parameter
 * Return: Always 0 (Success)
 */
int is_palindrome(char *s)
{
if (!*s)
return;
int z = 0,zz=0;
if(_puts_recursion(s + 1) == _print_rev_recursion(s + 1))
z++;
else
zz++;
if (z == (z + zz))
return (1);
else
return (0);
}
