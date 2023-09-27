#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - leng.
 * @s: parameter
 * Return: nothing
 */
int _strlen_recursion(char *s)
{
if (*s)
	{
s++;
return (1 + _strlen_recursion(s));
	}
return (0);
}
/**
 * c - extra
 * @str: the string
 * @len: parameter
 * @count: counter of recursion
 * Return: 1 if string is a palindrome, 0 if it is not.
 */
int c(char *str, int len, int i)
{
if (i >= len)
return (1);
if (str[len] == str[i])
return (checker(str, len - 1, i + 1));
return (0);
}
/**
 * is_palindrome - target func
 * @s: parameter
 * Return: 1 if string is a palindrome, 0 if it is not.
 */
int is_palindrome(char *s)
{
int len = _strlen_recursion(s);
int i = 0;

return (c(s, len - 1, i));
}
