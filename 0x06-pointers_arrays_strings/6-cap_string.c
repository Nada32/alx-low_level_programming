#include "main.h"

/**
 * *cap_string - all word cap
 * @c: parameter
 * Return: Always 0 (Success)
 */
char *cap_string(char *c)
{
	int i, len = 0;

	while (c[len] != '\0')
	len++;
	for (i = 0; i <= len; i++)
	if ((((c[i] == c[0] || c[i-1] == ' ' || (c[i - 1] < 'A')) && ((c[i] >= 'a') && (c[i] < ('z' + 1)))) || ((c[i] == c[0] || c[i - 1] == ' ' || (c[i - 1] > 'z')) && ((c[i] >= 'a') && (c[i] < ('z' + 1))))) || ((c[i] == c[0] || c[i - 1] == ' ' || ((c[i - 1] > 'Z') && (c[i - 1] < 'a'))) && ((c[i] >= 'a') && (c[i] < ('z' + 1)))))
	{
	c[i] = c[i] - 32;
	}
	return (c);
}
