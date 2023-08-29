#include "main.h"

/**
 * *_strchr - filling memo with a const byet
 * @s: parameter
 * @c: parameter
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int i, j, z = 0, len = 0;
	while (s[len] != '\0')
	len++;

	char ss[len];
	for (i = 0; i < len; i++)
	{
	if (s[i] == c)
	{
	for (j = i; j < len; j++)
	{
	ss[j] = s[i + z];
	_putchar(ss[j]);
	z++;
	}
	break;
	}
	else 
	{ss[i] = NULL;
	}
	}
	return (ss);	
}
